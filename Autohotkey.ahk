#NoEnv  ; Recommended for performance and compatibility with future AutoHotkey releases.
; #Warn  ; Enable warnings to assist with detecting common errors.
SendMode Input  ; Recommended for new scripts due to its superior speed and reliability.
SetWorkingDir %A_ScriptDir%  ; Ensures a consistent starting directory.

!2:: ; runs chrome user 1
Run, "C:\Program Files (x86)\Google\Chrome\Application\chrome.exe" --profile-directory="Profile 1"
return

!3:: ; runs chrome user 2
Run, "C:\Program Files (x86)\Google\Chrome\Application\chrome.exe" --profile-directory="Profile 2"
return

!1:: ; runs chrome user 5
Run, "C:\Program Files (x86)\Google\Chrome\Application\chrome.exe" --profile-directory="Profile 5"
return

#s:: ;screen shot - real good
Run, C:\Program Files (x86)\Opencapture\Opencapture.exe
Sleep 700
Send, +^r
return

!t::
Run, C:\Users\"user"\Desktop\To Do.lnk
return

!d::
Run, https://docs.google.com/document/u/0/
return

!c::
;Run, https://classroom.google.com/
Return

!q::
Run, C:\Users\"user"\Desktop\Sticky Notes.lnk
return

!g::
Run, https://mail.google.com/mail/u/0/#inbox
return

!v::
Run, https://drive.google.com/drive/u/0/my-drive
return

!w::
Run, C:\Program Files\Microsoft Office\root\Office16\WINWORD.EXE
return

!x::
Run, C:\Users\"user"\Desktop\Documents.lnk
return

!e::
Run, C:\Users\"user"\Pictures\Time Table.pdf
return

!i::
Run, C:\Users\"user"\VirtualBox VMs\Xubuntu\Xubuntu.vbox
return

#SingleInstance Force
