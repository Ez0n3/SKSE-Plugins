Scriptname EzSksePluginExampleQuestScript extends Quest  
{Ez SKSE Plugin Example Quest Script}

; ========================================================
; IMPORTS ================================================
; ========================================================

import EzSkseTestClass

; ========================================================
; VARIABLES ==============================================
; ========================================================

Int Property intTest = 1 Auto

Float Property floatTest = 1.0 Auto

Bool Property boolTest = False Auto

String Property stringTest = "One" Auto

; ========================================================
; EVENTS =================================================
; ========================================================

; For Skyrim, unlike Fallout4
; FIXME - called twice? prints 4 hello worlds
Event OnInit()
	Debug.Trace(self +" OnInit()")
	Debug.Notification("EzSksePluginExampleQuest : OnInit")
	Debug.MessageBox("EzSksePluginExampleQuest : OnInit")
	
	;code here
	
	;EzSkseTestClass
	;EzSkseTestClass.Test();
	
	if (EzSkseTestClass.Test())
		Debug.Trace(self +" EzSkseTestClass.Test()")
		Debug.Notification("EzSksePluginExampleQuest : EzSkseTestClass.Test()")
		Debug.MessageBox("EzSksePluginExampleQuest : EzSkseTestClass.Test()")
	endif
	
	if (Test())
		Debug.Trace(self +" Test()")
		Debug.Notification("EzSksePluginExampleQuest : Test()")
		Debug.MessageBox("EzSksePluginExampleQuest : Test()")
	endif
	
	Debug.Trace(self +" OnInit() : EOL")
	Debug.Notification("EzSksePluginExampleQuest : OnInit : EOL")
	Debug.MessageBox("EzSksePluginExampleQuest : OnInit : EOL")
EndEvent

Event OnReset()
	Debug.Trace(self +" OnReset()")
	Debug.Notification("EzSksePluginExampleQuest : OnReset")
	Debug.MessageBox("EzSksePluginExampleQuest : OnReset")
	
	;code here
	
	Debug.Trace(self +" OnReset() : EOL")
	Debug.Notification("EzSksePluginExampleQuest : OnReset : EOL")
EndEvent

; Not used in Skyrim, unlike Fallout4
;Event OnQuestShutdown()
;	Debug.Trace(self +" OnQuestShutdown()")
;	Debug.Notification("EzSksePluginExampleQuest : OnQuestShutdown")
;	Debug.MessageBox("EzSksePluginExampleQuest : OnQuestShutdown")
;	
;	;code here
;	
;	Debug.Trace(self +" OnQuestShutdown() : EOL")
;	Debug.Notification("EzSksePluginExampleQuest : OnQuestShutdown : EOL")
;EndEvent
