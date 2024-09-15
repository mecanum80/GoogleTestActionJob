param (
    [string]$action
)

# Set the root of the project
$scriptDir = Split-Path -Parent $MyInvocation.MyCommand.Definition
$rootDir = Join-Path $scriptDir "."
$buildDir = Join-Path $rootDir "build"

# Function to build the project
function Build-Project {
    if (-Not (Test-Path $buildDir)) {
        New-Item -ItemType Directory -Path $buildDir
    }

    cd $buildDir
    cmake ..
    cmake --build .
}

# Function to run the project in a new console
function Run-Project {
    Start-Process powershell -ArgumentList "-NoExit", "-Command", "cd $buildDir; .\Debug\SetUpGoogleTestActionJob.exe"
}

# Function to run the tests
function Run-Tests {
    Start-Process powershell -ArgumentList "-NoExit", "-Command", "cd $buildDir; .\Debug\runTests.exe"
}

# Main script logic
Push-Location $rootDir
switch ($action) {
    "build" {
        Build-Project
    }
    "run" {
        Run-Project
    }
    "test" {
        Run-Tests
    }

    default {
        Write-Host "Invalid action: $action. Use 'build' or 'run'"
    }
}
Pop-Location