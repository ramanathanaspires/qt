// +build !minimal

#pragma once

#ifndef GO_QTSCXML_H
#define GO_QTSCXML_H

#ifdef __cplusplus
extern "C" {
#endif

int QScxmlCppDataModel_In(void* ptr, char* stateName);
int QScxmlCppDataModel_HasScxmlProperty(void* ptr, char* name);
int QScxmlCppDataModel_HasScxmlPropertyDefault(void* ptr, char* name);
void* QScxmlCppDataModel_ScxmlEvent(void* ptr);
void* QScxmlCppDataModel_ScxmlProperty(void* ptr, char* name);
void* QScxmlCppDataModel_ScxmlPropertyDefault(void* ptr, char* name);
void QScxmlCppDataModel_SetScxmlEvent(void* ptr, void* event);
int QScxmlCppDataModel_SetScxmlProperty(void* ptr, char* name, void* value, char* context);
int QScxmlCppDataModel_SetScxmlPropertyDefault(void* ptr, char* name, void* value, char* context);
void QScxmlCppDataModel_TimerEvent(void* ptr, void* event);
void QScxmlCppDataModel_TimerEventDefault(void* ptr, void* event);
void QScxmlCppDataModel_ChildEvent(void* ptr, void* event);
void QScxmlCppDataModel_ChildEventDefault(void* ptr, void* event);
void QScxmlCppDataModel_ConnectNotify(void* ptr, void* sign);
void QScxmlCppDataModel_ConnectNotifyDefault(void* ptr, void* sign);
void QScxmlCppDataModel_CustomEvent(void* ptr, void* event);
void QScxmlCppDataModel_CustomEventDefault(void* ptr, void* event);
void QScxmlCppDataModel_DeleteLater(void* ptr);
void QScxmlCppDataModel_DeleteLaterDefault(void* ptr);
void QScxmlCppDataModel_DisconnectNotify(void* ptr, void* sign);
void QScxmlCppDataModel_DisconnectNotifyDefault(void* ptr, void* sign);
int QScxmlCppDataModel_Event(void* ptr, void* e);
int QScxmlCppDataModel_EventDefault(void* ptr, void* e);
int QScxmlCppDataModel_EventFilter(void* ptr, void* watched, void* event);
int QScxmlCppDataModel_EventFilterDefault(void* ptr, void* watched, void* event);
void* QScxmlCppDataModel_MetaObject(void* ptr);
void* QScxmlCppDataModel_MetaObjectDefault(void* ptr);
int QScxmlDataModel_HasScxmlProperty(void* ptr, char* name);
void* QScxmlDataModel_ScxmlProperty(void* ptr, char* name);
void QScxmlDataModel_SetScxmlEvent(void* ptr, void* event);
int QScxmlDataModel_SetScxmlProperty(void* ptr, char* name, void* value, char* context);
void QScxmlDataModel_SetStateMachine(void* ptr, void* stateMachine);
void* QScxmlDataModel_StateMachine(void* ptr);
void QScxmlDataModel_ConnectStateMachineChanged(void* ptr);
void QScxmlDataModel_DisconnectStateMachineChanged(void* ptr);
void QScxmlDataModel_StateMachineChanged(void* ptr, void* stateMachine);
void QScxmlDataModel_TimerEvent(void* ptr, void* event);
void QScxmlDataModel_TimerEventDefault(void* ptr, void* event);
void QScxmlDataModel_ChildEvent(void* ptr, void* event);
void QScxmlDataModel_ChildEventDefault(void* ptr, void* event);
void QScxmlDataModel_ConnectNotify(void* ptr, void* sign);
void QScxmlDataModel_ConnectNotifyDefault(void* ptr, void* sign);
void QScxmlDataModel_CustomEvent(void* ptr, void* event);
void QScxmlDataModel_CustomEventDefault(void* ptr, void* event);
void QScxmlDataModel_DeleteLater(void* ptr);
void QScxmlDataModel_DeleteLaterDefault(void* ptr);
void QScxmlDataModel_DisconnectNotify(void* ptr, void* sign);
void QScxmlDataModel_DisconnectNotifyDefault(void* ptr, void* sign);
int QScxmlDataModel_Event(void* ptr, void* e);
int QScxmlDataModel_EventDefault(void* ptr, void* e);
int QScxmlDataModel_EventFilter(void* ptr, void* watched, void* event);
int QScxmlDataModel_EventFilterDefault(void* ptr, void* watched, void* event);
void* QScxmlDataModel_MetaObject(void* ptr);
void* QScxmlDataModel_MetaObjectDefault(void* ptr);
void* QScxmlEcmaScriptDataModel_NewQScxmlEcmaScriptDataModel(void* parent);
void* QScxmlEcmaScriptDataModel_Engine(void* ptr);
int QScxmlEcmaScriptDataModel_HasScxmlProperty(void* ptr, char* name);
int QScxmlEcmaScriptDataModel_HasScxmlPropertyDefault(void* ptr, char* name);
void* QScxmlEcmaScriptDataModel_ScxmlProperty(void* ptr, char* name);
void* QScxmlEcmaScriptDataModel_ScxmlPropertyDefault(void* ptr, char* name);
void QScxmlEcmaScriptDataModel_SetEngine(void* ptr, void* engine);
void QScxmlEcmaScriptDataModel_SetScxmlEvent(void* ptr, void* event);
void QScxmlEcmaScriptDataModel_SetScxmlEventDefault(void* ptr, void* event);
int QScxmlEcmaScriptDataModel_SetScxmlProperty(void* ptr, char* name, void* value, char* context);
int QScxmlEcmaScriptDataModel_SetScxmlPropertyDefault(void* ptr, char* name, void* value, char* context);
void QScxmlEcmaScriptDataModel_TimerEvent(void* ptr, void* event);
void QScxmlEcmaScriptDataModel_TimerEventDefault(void* ptr, void* event);
void QScxmlEcmaScriptDataModel_ChildEvent(void* ptr, void* event);
void QScxmlEcmaScriptDataModel_ChildEventDefault(void* ptr, void* event);
void QScxmlEcmaScriptDataModel_ConnectNotify(void* ptr, void* sign);
void QScxmlEcmaScriptDataModel_ConnectNotifyDefault(void* ptr, void* sign);
void QScxmlEcmaScriptDataModel_CustomEvent(void* ptr, void* event);
void QScxmlEcmaScriptDataModel_CustomEventDefault(void* ptr, void* event);
void QScxmlEcmaScriptDataModel_DeleteLater(void* ptr);
void QScxmlEcmaScriptDataModel_DeleteLaterDefault(void* ptr);
void QScxmlEcmaScriptDataModel_DisconnectNotify(void* ptr, void* sign);
void QScxmlEcmaScriptDataModel_DisconnectNotifyDefault(void* ptr, void* sign);
int QScxmlEcmaScriptDataModel_Event(void* ptr, void* e);
int QScxmlEcmaScriptDataModel_EventDefault(void* ptr, void* e);
int QScxmlEcmaScriptDataModel_EventFilter(void* ptr, void* watched, void* event);
int QScxmlEcmaScriptDataModel_EventFilterDefault(void* ptr, void* watched, void* event);
void* QScxmlEcmaScriptDataModel_MetaObject(void* ptr);
void* QScxmlEcmaScriptDataModel_MetaObjectDefault(void* ptr);
void* QScxmlError_NewQScxmlError();
void* QScxmlError_NewQScxmlError3(void* other);
void* QScxmlError_NewQScxmlError2(char* fileName, int line, int column, char* description);
int QScxmlError_Column(void* ptr);
char* QScxmlError_Description(void* ptr);
char* QScxmlError_FileName(void* ptr);
int QScxmlError_IsValid(void* ptr);
int QScxmlError_Line(void* ptr);
char* QScxmlError_ToString(void* ptr);
void QScxmlError_DestroyQScxmlError(void* ptr);
void* QScxmlEvent_NewQScxmlEvent();
void* QScxmlEvent_NewQScxmlEvent2(void* other);
void QScxmlEvent_Clear(void* ptr);
void* QScxmlEvent_Data(void* ptr);
int QScxmlEvent_Delay(void* ptr);
char* QScxmlEvent_ErrorMessage(void* ptr);
int QScxmlEvent_EventType(void* ptr);
char* QScxmlEvent_InvokeId(void* ptr);
int QScxmlEvent_IsErrorEvent(void* ptr);
char* QScxmlEvent_Name(void* ptr);
char* QScxmlEvent_Origin(void* ptr);
char* QScxmlEvent_OriginType(void* ptr);
char* QScxmlEvent_ScxmlType(void* ptr);
char* QScxmlEvent_SendId(void* ptr);
void QScxmlEvent_SetData(void* ptr, void* data);
void QScxmlEvent_SetDelay(void* ptr, int delayInMiliSecs);
void QScxmlEvent_SetErrorMessage(void* ptr, char* message);
void QScxmlEvent_SetEventType(void* ptr, int ty);
void QScxmlEvent_SetInvokeId(void* ptr, char* invokeid);
void QScxmlEvent_SetName(void* ptr, char* name);
void QScxmlEvent_SetOrigin(void* ptr, char* origin);
void QScxmlEvent_SetOriginType(void* ptr, char* origintype);
void QScxmlEvent_SetSendId(void* ptr, char* sendid);
void QScxmlEvent_DestroyQScxmlEvent(void* ptr);
int QScxmlEventFilter_Handle(void* ptr, void* event, void* stateMachine);
void QScxmlEventFilter_DestroyQScxmlEventFilter(void* ptr);
char* QScxmlEventFilter_ObjectNameAbs(void* ptr);
void QScxmlEventFilter_SetObjectNameAbs(void* ptr, char* name);
void* QScxmlNullDataModel_NewQScxmlNullDataModel(void* parent);
int QScxmlNullDataModel_HasScxmlProperty(void* ptr, char* name);
int QScxmlNullDataModel_HasScxmlPropertyDefault(void* ptr, char* name);
void* QScxmlNullDataModel_ScxmlProperty(void* ptr, char* name);
void* QScxmlNullDataModel_ScxmlPropertyDefault(void* ptr, char* name);
void QScxmlNullDataModel_SetScxmlEvent(void* ptr, void* event);
void QScxmlNullDataModel_SetScxmlEventDefault(void* ptr, void* event);
int QScxmlNullDataModel_SetScxmlProperty(void* ptr, char* name, void* value, char* context);
int QScxmlNullDataModel_SetScxmlPropertyDefault(void* ptr, char* name, void* value, char* context);
void QScxmlNullDataModel_TimerEvent(void* ptr, void* event);
void QScxmlNullDataModel_TimerEventDefault(void* ptr, void* event);
void QScxmlNullDataModel_ChildEvent(void* ptr, void* event);
void QScxmlNullDataModel_ChildEventDefault(void* ptr, void* event);
void QScxmlNullDataModel_ConnectNotify(void* ptr, void* sign);
void QScxmlNullDataModel_ConnectNotifyDefault(void* ptr, void* sign);
void QScxmlNullDataModel_CustomEvent(void* ptr, void* event);
void QScxmlNullDataModel_CustomEventDefault(void* ptr, void* event);
void QScxmlNullDataModel_DeleteLater(void* ptr);
void QScxmlNullDataModel_DeleteLaterDefault(void* ptr);
void QScxmlNullDataModel_DisconnectNotify(void* ptr, void* sign);
void QScxmlNullDataModel_DisconnectNotifyDefault(void* ptr, void* sign);
int QScxmlNullDataModel_Event(void* ptr, void* e);
int QScxmlNullDataModel_EventDefault(void* ptr, void* e);
int QScxmlNullDataModel_EventFilter(void* ptr, void* watched, void* event);
int QScxmlNullDataModel_EventFilterDefault(void* ptr, void* watched, void* event);
void* QScxmlNullDataModel_MetaObject(void* ptr);
void* QScxmlNullDataModel_MetaObjectDefault(void* ptr);
void* QScxmlParser_NewQScxmlParser(void* reader);
void QScxmlParser_AddError(void* ptr, char* msg);
char* QScxmlParser_FileName(void* ptr);
void QScxmlParser_InstantiateDataModel(void* ptr, void* stateMachine);
void* QScxmlParser_InstantiateStateMachine(void* ptr);
void QScxmlParser_Parse(void* ptr);
int QScxmlParser_QtMode(void* ptr);
void QScxmlParser_SetFileName(void* ptr, char* fileName);
void QScxmlParser_SetQtMode(void* ptr, int mode);
void QScxmlParser_DestroyQScxmlParser(void* ptr);
int QScxmlStateMachine_IsInitialized(void* ptr);
char* QScxmlStateMachine_ActiveStateNames(void* ptr, int compress);
void QScxmlStateMachine_CancelDelayedEvent(void* ptr, char* sendId);
int QScxmlStateMachine_DataBinding(void* ptr);
void* QScxmlStateMachine_DataModel(void* ptr);
void QScxmlStateMachine_ConnectDataModelChanged(void* ptr);
void QScxmlStateMachine_DisconnectDataModelChanged(void* ptr);
void QScxmlStateMachine_DataModelChanged(void* ptr, void* model);
void QScxmlStateMachine_ConnectEventOccurred(void* ptr);
void QScxmlStateMachine_DisconnectEventOccurred(void* ptr);
void QScxmlStateMachine_EventOccurred(void* ptr, void* event);
void QScxmlStateMachine_ConnectExternalEventOccurred(void* ptr);
void QScxmlStateMachine_DisconnectExternalEventOccurred(void* ptr);
void QScxmlStateMachine_ExternalEventOccurred(void* ptr, void* event);
void QScxmlStateMachine_ConnectFinished(void* ptr);
void QScxmlStateMachine_DisconnectFinished(void* ptr);
void QScxmlStateMachine_Finished(void* ptr);
void* QScxmlStateMachine_QScxmlStateMachine_FromData(void* data, char* fileName);
void* QScxmlStateMachine_QScxmlStateMachine_FromFile(char* fileName);
char* QScxmlStateMachine_QScxmlStateMachine_GenerateSessionId(char* prefix);
int QScxmlStateMachine_Init(void* ptr);
void QScxmlStateMachine_ConnectInitializedChanged(void* ptr);
void QScxmlStateMachine_DisconnectInitializedChanged(void* ptr);
void QScxmlStateMachine_InitializedChanged(void* ptr, int initialized);
int QScxmlStateMachine_IsActive(void* ptr, char* scxmlStateName);
int QScxmlStateMachine_IsDispatchableTarget(void* ptr, char* target);
int QScxmlStateMachine_IsInvoked(void* ptr);
int QScxmlStateMachine_IsRunning(void* ptr);
void QScxmlStateMachine_ConnectLog(void* ptr);
void QScxmlStateMachine_DisconnectLog(void* ptr);
void QScxmlStateMachine_Log(void* ptr, char* label, char* msg);
char* QScxmlStateMachine_Name(void* ptr);
void QScxmlStateMachine_ConnectReachedStableState(void* ptr);
void QScxmlStateMachine_DisconnectReachedStableState(void* ptr);
void QScxmlStateMachine_ReachedStableState(void* ptr);
void QScxmlStateMachine_ConnectRunningChanged(void* ptr);
void QScxmlStateMachine_DisconnectRunningChanged(void* ptr);
void QScxmlStateMachine_RunningChanged(void* ptr, int running);
void* QScxmlStateMachine_ScxmlEventFilter(void* ptr);
char* QScxmlStateMachine_SessionId(void* ptr);
void QScxmlStateMachine_SetDataModel(void* ptr, void* model);
void QScxmlStateMachine_SetRunning(void* ptr, int running);
void QScxmlStateMachine_SetScxmlEventFilter(void* ptr, void* newFilter);
void QScxmlStateMachine_SetSessionId(void* ptr, char* id);
void QScxmlStateMachine_Start(void* ptr);
char* QScxmlStateMachine_StateNames(void* ptr, int compress);
void QScxmlStateMachine_Stop(void* ptr);
void QScxmlStateMachine_SubmitEvent(void* ptr, void* event);
void QScxmlStateMachine_SubmitEvent2(void* ptr, char* eventName);
void QScxmlStateMachine_SubmitEvent3(void* ptr, char* eventName, void* data);
void QScxmlStateMachine_TimerEvent(void* ptr, void* event);
void QScxmlStateMachine_TimerEventDefault(void* ptr, void* event);
void QScxmlStateMachine_ChildEvent(void* ptr, void* event);
void QScxmlStateMachine_ChildEventDefault(void* ptr, void* event);
void QScxmlStateMachine_ConnectNotify(void* ptr, void* sign);
void QScxmlStateMachine_ConnectNotifyDefault(void* ptr, void* sign);
void QScxmlStateMachine_CustomEvent(void* ptr, void* event);
void QScxmlStateMachine_CustomEventDefault(void* ptr, void* event);
void QScxmlStateMachine_DeleteLater(void* ptr);
void QScxmlStateMachine_DeleteLaterDefault(void* ptr);
void QScxmlStateMachine_DisconnectNotify(void* ptr, void* sign);
void QScxmlStateMachine_DisconnectNotifyDefault(void* ptr, void* sign);
int QScxmlStateMachine_Event(void* ptr, void* e);
int QScxmlStateMachine_EventDefault(void* ptr, void* e);
int QScxmlStateMachine_EventFilter(void* ptr, void* watched, void* event);
int QScxmlStateMachine_EventFilterDefault(void* ptr, void* watched, void* event);
void* QScxmlStateMachine_MetaObject(void* ptr);
void* QScxmlStateMachine_MetaObjectDefault(void* ptr);

#ifdef __cplusplus
}
#endif

#endif