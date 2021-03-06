; Script generated by the Inno Setup Script Wizard.
; SEE THE DOCUMENTATION FOR DETAILS ON CREATING INNO SETUP SCRIPT FILES!

#define MyAppName "Vega Strike"
#define MyAppVersion ".5.1"
#define MyAppPublisher "Vega Strike Project"
#define MyAppURL "http://www.vega-strike.org"
#define MyAppExeName "vegastrike.exe"

[Setup]
; NOTE: The value of AppId uniquely identifies this application.
; Do not use the same AppId value in installers for other applications.
; (To generate a new GUID, click Tools | Generate GUID inside the IDE.)
AppID={{10E0724C-11ED-45C8-AD4D-2D6FC6B304BF}
AppName={#MyAppName}
AppVersion={#MyAppVersion}
;AppVerName={#MyAppName} {#MyAppVersion}
AppPublisher={#MyAppPublisher}
AppPublisherURL={#MyAppURL}
AppSupportURL={#MyAppURL}
AppUpdatesURL={#MyAppURL}
DefaultDirName={pf}\{#MyAppName}
DefaultGroupName={#MyAppName}
AllowNoIcons=true
OutputDir=E:\vsdone
OutputBaseFilename=VS Setup .5.1 r1
SetupIconFile=E:\vsinstall\vegastrike.ico
Compression=lzma2/Ultra
SolidCompression=true

[Languages]
Name: "english"; MessagesFile: "compiler:Default.isl"
Name: "french"; MessagesFile: "compiler:Languages\French.isl"
Name: "german"; MessagesFile: "compiler:Languages\German.isl"
Name: "russian"; MessagesFile: "compiler:Languages\Russian.isl"
Name: "spanish"; MessagesFile: "compiler:Languages\Spanish.isl"

[Tasks]
Name: "desktopicon"; Description: "{cm:CreateDesktopIcon}"; GroupDescription: "{cm:AdditionalIcons}"; Flags: unchecked
Name: "quicklaunchicon"; Description: "{cm:CreateQuickLaunchIcon}"; GroupDescription: "{cm:AdditionalIcons}"; Flags: unchecked; OnlyBelowVersion: 0,6.1

[Files]
Source: "E:\vsinstall\vegastrike.exe"; DestDir: "{app}"; Flags: ignoreversion
Source: "E:\vsinstall\vcredist_x86.exe"; DestDir: "{app}"; Flags: ignoreversion
Source: "E:\vsinstall\oalinst.exe"; DestDir: "{app}"; Flags: ignoreversion
Source: "E:\vsinstall\*"; DestDir: "{app}"; Flags: ignoreversion recursesubdirs createallsubdirs
; NOTE: Don't use "Flags: ignoreversion" on any shared system files

[Icons]
Name: "{group}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"
Name: "{group}\{cm:ProgramOnTheWeb,{#MyAppName}}"; Filename: "{#MyAppURL}"
Name: "{group}\{cm:UninstallProgram,{#MyAppName}}"; Filename: "{uninstallexe}"
Name: "{commondesktop}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"; Tasks: desktopicon
Name: "{userappdata}\Microsoft\Internet Explorer\Quick Launch\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"; Tasks: quicklaunchicon

[Run]
Filename: "{app}\vcredist_x86.exe"; Description: "MS Visual C++ 2008 runtime files"; StatusMsg: "Installing Visual C++ 9 Runtime Files..."; Flags: nowait
Filename: "{app}\oalinst.exe"; Description: "Creative Labs OpenAL Runtime Files"; StatusMsg: "Installing OpenAL Runtime Files..."; Flags: nowait
Filename: {app}\{#MyAppExeName}; Flags: postinstall skipifsilent WaitUntilIdle; 
