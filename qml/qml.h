// +build !minimal

#pragma once

#ifndef GO_QTQML_H
#define GO_QTQML_H

#ifdef __cplusplus
extern "C" {
#endif

void* QJSEngine_NewQJSEngine();
void* QJSEngine_NewQJSEngine2(void* parent);
void QJSEngine_CollectGarbage(void* ptr);
void* QJSEngine_Evaluate(void* ptr, char* program, char* fileName, int lineNumber);
void* QJSEngine_GlobalObject(void* ptr);
void QJSEngine_InstallExtensions(void* ptr, int extensions, void* object);
void* QJSEngine_NewObject(void* ptr);
void* QJSEngine_NewQObject(void* ptr, void* object);
void QJSEngine_DestroyQJSEngine(void* ptr);
void QJSEngine_TimerEvent(void* ptr, void* event);
void QJSEngine_TimerEventDefault(void* ptr, void* event);
void QJSEngine_ChildEvent(void* ptr, void* event);
void QJSEngine_ChildEventDefault(void* ptr, void* event);
void QJSEngine_ConnectNotify(void* ptr, void* sign);
void QJSEngine_ConnectNotifyDefault(void* ptr, void* sign);
void QJSEngine_CustomEvent(void* ptr, void* event);
void QJSEngine_CustomEventDefault(void* ptr, void* event);
void QJSEngine_DeleteLater(void* ptr);
void QJSEngine_DeleteLaterDefault(void* ptr);
void QJSEngine_DisconnectNotify(void* ptr, void* sign);
void QJSEngine_DisconnectNotifyDefault(void* ptr, void* sign);
int QJSEngine_Event(void* ptr, void* e);
int QJSEngine_EventDefault(void* ptr, void* e);
int QJSEngine_EventFilter(void* ptr, void* watched, void* event);
int QJSEngine_EventFilterDefault(void* ptr, void* watched, void* event);
void* QJSEngine_MetaObject(void* ptr);
void* QJSEngine_MetaObjectDefault(void* ptr);
void* QJSValue_NewQJSValue3(void* other);
void* QJSValue_NewQJSValue(int value);
void* QJSValue_NewQJSValue4(int value);
void* QJSValue_NewQJSValue2(void* other);
void* QJSValue_NewQJSValue9(void* value);
void* QJSValue_NewQJSValue8(char* value);
void* QJSValue_NewQJSValue10(char* value);
void* QJSValue_NewQJSValue5(int value);
int QJSValue_DeleteProperty(void* ptr, char* name);
int QJSValue_Equals(void* ptr, void* other);
int QJSValue_HasOwnProperty(void* ptr, char* name);
int QJSValue_HasProperty(void* ptr, char* name);
int QJSValue_IsArray(void* ptr);
int QJSValue_IsBool(void* ptr);
int QJSValue_IsCallable(void* ptr);
int QJSValue_IsDate(void* ptr);
int QJSValue_IsError(void* ptr);
int QJSValue_IsNull(void* ptr);
int QJSValue_IsNumber(void* ptr);
int QJSValue_IsObject(void* ptr);
int QJSValue_IsQObject(void* ptr);
int QJSValue_IsRegExp(void* ptr);
int QJSValue_IsString(void* ptr);
int QJSValue_IsUndefined(void* ptr);
int QJSValue_IsVariant(void* ptr);
void* QJSValue_Property(void* ptr, char* name);
void* QJSValue_Prototype(void* ptr);
void QJSValue_SetProperty(void* ptr, char* name, void* value);
void QJSValue_SetPrototype(void* ptr, void* prototype);
int QJSValue_StrictlyEquals(void* ptr, void* other);
int QJSValue_ToBool(void* ptr);
void* QJSValue_ToDateTime(void* ptr);
void* QJSValue_ToQObject(void* ptr);
char* QJSValue_ToString(void* ptr);
void* QJSValue_ToVariant(void* ptr);
void QJSValue_DestroyQJSValue(void* ptr);
void* QQmlAbstractUrlInterceptor_NewQQmlAbstractUrlInterceptor();
void* QQmlAbstractUrlInterceptor_Intercept(void* ptr, void* url, int ty);
void QQmlAbstractUrlInterceptor_DestroyQQmlAbstractUrlInterceptor(void* ptr);
char* QQmlAbstractUrlInterceptor_ObjectNameAbs(void* ptr);
void QQmlAbstractUrlInterceptor_SetObjectNameAbs(void* ptr, char* name);
void* QQmlApplicationEngine_NewQQmlApplicationEngine(void* parent);
void* QQmlApplicationEngine_NewQQmlApplicationEngine3(char* filePath, void* parent);
void* QQmlApplicationEngine_NewQQmlApplicationEngine2(void* url, void* parent);
void QQmlApplicationEngine_Load2(void* ptr, char* filePath);
void QQmlApplicationEngine_Load(void* ptr, void* url);
void QQmlApplicationEngine_LoadData(void* ptr, char* data, void* url);
void QQmlApplicationEngine_ConnectObjectCreated(void* ptr);
void QQmlApplicationEngine_DisconnectObjectCreated(void* ptr);
void QQmlApplicationEngine_ObjectCreated(void* ptr, void* object, void* url);
void QQmlApplicationEngine_DestroyQQmlApplicationEngine(void* ptr);
int QQmlApplicationEngine_Event(void* ptr, void* e);
int QQmlApplicationEngine_EventDefault(void* ptr, void* e);
void QQmlApplicationEngine_TimerEvent(void* ptr, void* event);
void QQmlApplicationEngine_TimerEventDefault(void* ptr, void* event);
void QQmlApplicationEngine_ChildEvent(void* ptr, void* event);
void QQmlApplicationEngine_ChildEventDefault(void* ptr, void* event);
void QQmlApplicationEngine_ConnectNotify(void* ptr, void* sign);
void QQmlApplicationEngine_ConnectNotifyDefault(void* ptr, void* sign);
void QQmlApplicationEngine_CustomEvent(void* ptr, void* event);
void QQmlApplicationEngine_CustomEventDefault(void* ptr, void* event);
void QQmlApplicationEngine_DeleteLater(void* ptr);
void QQmlApplicationEngine_DeleteLaterDefault(void* ptr);
void QQmlApplicationEngine_DisconnectNotify(void* ptr, void* sign);
void QQmlApplicationEngine_DisconnectNotifyDefault(void* ptr, void* sign);
int QQmlApplicationEngine_EventFilter(void* ptr, void* watched, void* event);
int QQmlApplicationEngine_EventFilterDefault(void* ptr, void* watched, void* event);
void* QQmlApplicationEngine_MetaObject(void* ptr);
void* QQmlApplicationEngine_MetaObjectDefault(void* ptr);
double QQmlComponent_Progress(void* ptr);
int QQmlComponent_Status(void* ptr);
void* QQmlComponent_Url(void* ptr);
void* QQmlComponent_NewQQmlComponent(void* engine, void* parent);
void* QQmlComponent_NewQQmlComponent4(void* engine, char* fileName, int mode, void* parent);
void* QQmlComponent_NewQQmlComponent3(void* engine, char* fileName, void* parent);
void* QQmlComponent_NewQQmlComponent6(void* engine, void* url, int mode, void* parent);
void* QQmlComponent_NewQQmlComponent5(void* engine, void* url, void* parent);
void* QQmlComponent_BeginCreate(void* ptr, void* publicContext);
void* QQmlComponent_BeginCreateDefault(void* ptr, void* publicContext);
void QQmlComponent_CompleteCreate(void* ptr);
void QQmlComponent_CompleteCreateDefault(void* ptr);
void* QQmlComponent_Create(void* ptr, void* context);
void* QQmlComponent_CreateDefault(void* ptr, void* context);
void QQmlComponent_Create2(void* ptr, void* incubator, void* context, void* forContext);
void* QQmlComponent_CreationContext(void* ptr);
int QQmlComponent_IsError(void* ptr);
int QQmlComponent_IsLoading(void* ptr);
int QQmlComponent_IsNull(void* ptr);
int QQmlComponent_IsReady(void* ptr);
void QQmlComponent_LoadUrl(void* ptr, void* url);
void QQmlComponent_LoadUrl2(void* ptr, void* url, int mode);
void QQmlComponent_ConnectProgressChanged(void* ptr);
void QQmlComponent_DisconnectProgressChanged(void* ptr);
void QQmlComponent_ProgressChanged(void* ptr, double progress);
void QQmlComponent_SetData(void* ptr, char* data, void* url);
void QQmlComponent_ConnectStatusChanged(void* ptr);
void QQmlComponent_DisconnectStatusChanged(void* ptr);
void QQmlComponent_StatusChanged(void* ptr, int status);
void QQmlComponent_DestroyQQmlComponent(void* ptr);
void QQmlComponent_TimerEvent(void* ptr, void* event);
void QQmlComponent_TimerEventDefault(void* ptr, void* event);
void QQmlComponent_ChildEvent(void* ptr, void* event);
void QQmlComponent_ChildEventDefault(void* ptr, void* event);
void QQmlComponent_ConnectNotify(void* ptr, void* sign);
void QQmlComponent_ConnectNotifyDefault(void* ptr, void* sign);
void QQmlComponent_CustomEvent(void* ptr, void* event);
void QQmlComponent_CustomEventDefault(void* ptr, void* event);
void QQmlComponent_DeleteLater(void* ptr);
void QQmlComponent_DeleteLaterDefault(void* ptr);
void QQmlComponent_DisconnectNotify(void* ptr, void* sign);
void QQmlComponent_DisconnectNotifyDefault(void* ptr, void* sign);
int QQmlComponent_Event(void* ptr, void* e);
int QQmlComponent_EventDefault(void* ptr, void* e);
int QQmlComponent_EventFilter(void* ptr, void* watched, void* event);
int QQmlComponent_EventFilterDefault(void* ptr, void* watched, void* event);
void* QQmlComponent_MetaObject(void* ptr);
void* QQmlComponent_MetaObjectDefault(void* ptr);
void* QQmlContext_NewQQmlContext2(void* parentContext, void* parent);
void* QQmlContext_NewQQmlContext(void* engine, void* parent);
void* QQmlContext_BaseUrl(void* ptr);
void* QQmlContext_ContextObject(void* ptr);
void* QQmlContext_ContextProperty(void* ptr, char* name);
void* QQmlContext_Engine(void* ptr);
int QQmlContext_IsValid(void* ptr);
char* QQmlContext_NameForObject(void* ptr, void* object);
void* QQmlContext_ParentContext(void* ptr);
void* QQmlContext_ResolvedUrl(void* ptr, void* src);
void QQmlContext_SetBaseUrl(void* ptr, void* baseUrl);
void QQmlContext_SetContextObject(void* ptr, void* object);
void QQmlContext_SetContextProperty(void* ptr, char* name, void* value);
void QQmlContext_SetContextProperty2(void* ptr, char* name, void* value);
void QQmlContext_DestroyQQmlContext(void* ptr);
void QQmlContext_TimerEvent(void* ptr, void* event);
void QQmlContext_TimerEventDefault(void* ptr, void* event);
void QQmlContext_ChildEvent(void* ptr, void* event);
void QQmlContext_ChildEventDefault(void* ptr, void* event);
void QQmlContext_ConnectNotify(void* ptr, void* sign);
void QQmlContext_ConnectNotifyDefault(void* ptr, void* sign);
void QQmlContext_CustomEvent(void* ptr, void* event);
void QQmlContext_CustomEventDefault(void* ptr, void* event);
void QQmlContext_DeleteLater(void* ptr);
void QQmlContext_DeleteLaterDefault(void* ptr);
void QQmlContext_DisconnectNotify(void* ptr, void* sign);
void QQmlContext_DisconnectNotifyDefault(void* ptr, void* sign);
int QQmlContext_Event(void* ptr, void* e);
int QQmlContext_EventDefault(void* ptr, void* e);
int QQmlContext_EventFilter(void* ptr, void* watched, void* event);
int QQmlContext_EventFilterDefault(void* ptr, void* watched, void* event);
void* QQmlContext_MetaObject(void* ptr);
void* QQmlContext_MetaObjectDefault(void* ptr);
char* QQmlEngine_OfflineStoragePath(void* ptr);
void QQmlEngine_SetOfflineStoragePath(void* ptr, char* dir);
void* QQmlEngine_NewQQmlEngine(void* parent);
void QQmlEngine_AddImageProvider(void* ptr, char* providerId, void* provider);
void QQmlEngine_AddImportPath(void* ptr, char* path);
void QQmlEngine_AddPluginPath(void* ptr, char* path);
void* QQmlEngine_BaseUrl(void* ptr);
void QQmlEngine_ClearComponentCache(void* ptr);
void* QQmlEngine_QQmlEngine_ContextForObject(void* object);
int QQmlEngine_Event(void* ptr, void* e);
int QQmlEngine_EventDefault(void* ptr, void* e);
void* QQmlEngine_ImageProvider(void* ptr, char* providerId);
char* QQmlEngine_ImportPathList(void* ptr);
void* QQmlEngine_IncubationController(void* ptr);
void* QQmlEngine_NetworkAccessManager(void* ptr);
void* QQmlEngine_NetworkAccessManagerFactory(void* ptr);
int QQmlEngine_QQmlEngine_ObjectOwnership(void* object);
int QQmlEngine_OutputWarningsToStandardError(void* ptr);
char* QQmlEngine_PluginPathList(void* ptr);
void QQmlEngine_ConnectQuit(void* ptr);
void QQmlEngine_DisconnectQuit(void* ptr);
void QQmlEngine_Quit(void* ptr);
void QQmlEngine_RemoveImageProvider(void* ptr, char* providerId);
void* QQmlEngine_RootContext(void* ptr);
void QQmlEngine_SetBaseUrl(void* ptr, void* url);
void QQmlEngine_QQmlEngine_SetContextForObject(void* object, void* context);
void QQmlEngine_SetImportPathList(void* ptr, char* paths);
void QQmlEngine_SetIncubationController(void* ptr, void* controller);
void QQmlEngine_SetNetworkAccessManagerFactory(void* ptr, void* factory);
void QQmlEngine_QQmlEngine_SetObjectOwnership(void* object, int ownership);
void QQmlEngine_SetOutputWarningsToStandardError(void* ptr, int enabled);
void QQmlEngine_SetPluginPathList(void* ptr, char* paths);
void QQmlEngine_TrimComponentCache(void* ptr);
void QQmlEngine_DestroyQQmlEngine(void* ptr);
void QQmlEngine_TimerEvent(void* ptr, void* event);
void QQmlEngine_TimerEventDefault(void* ptr, void* event);
void QQmlEngine_ChildEvent(void* ptr, void* event);
void QQmlEngine_ChildEventDefault(void* ptr, void* event);
void QQmlEngine_ConnectNotify(void* ptr, void* sign);
void QQmlEngine_ConnectNotifyDefault(void* ptr, void* sign);
void QQmlEngine_CustomEvent(void* ptr, void* event);
void QQmlEngine_CustomEventDefault(void* ptr, void* event);
void QQmlEngine_DeleteLater(void* ptr);
void QQmlEngine_DeleteLaterDefault(void* ptr);
void QQmlEngine_DisconnectNotify(void* ptr, void* sign);
void QQmlEngine_DisconnectNotifyDefault(void* ptr, void* sign);
int QQmlEngine_EventFilter(void* ptr, void* watched, void* event);
int QQmlEngine_EventFilterDefault(void* ptr, void* watched, void* event);
void* QQmlEngine_MetaObject(void* ptr);
void* QQmlEngine_MetaObjectDefault(void* ptr);
void* QQmlError_NewQQmlError();
void* QQmlError_NewQQmlError2(void* other);
int QQmlError_Column(void* ptr);
char* QQmlError_Description(void* ptr);
int QQmlError_IsValid(void* ptr);
int QQmlError_Line(void* ptr);
void* QQmlError_Object(void* ptr);
void QQmlError_SetColumn(void* ptr, int column);
void QQmlError_SetDescription(void* ptr, char* description);
void QQmlError_SetLine(void* ptr, int line);
void QQmlError_SetObject(void* ptr, void* object);
void QQmlError_SetUrl(void* ptr, void* url);
char* QQmlError_ToString(void* ptr);
void* QQmlError_Url(void* ptr);
void* QQmlExpression_NewQQmlExpression();
void* QQmlExpression_NewQQmlExpression2(void* ctxt, void* scope, char* expression, void* parent);
void* QQmlExpression_NewQQmlExpression3(void* script, void* ctxt, void* scope, void* parent);
void QQmlExpression_ClearError(void* ptr);
int QQmlExpression_ColumnNumber(void* ptr);
void* QQmlExpression_Context(void* ptr);
void* QQmlExpression_Engine(void* ptr);
void* QQmlExpression_Error(void* ptr);
void* QQmlExpression_Evaluate(void* ptr, int valueIsUndefined);
char* QQmlExpression_Expression(void* ptr);
int QQmlExpression_HasError(void* ptr);
int QQmlExpression_LineNumber(void* ptr);
int QQmlExpression_NotifyOnValueChanged(void* ptr);
void* QQmlExpression_ScopeObject(void* ptr);
void QQmlExpression_SetExpression(void* ptr, char* expression);
void QQmlExpression_SetNotifyOnValueChanged(void* ptr, int notifyOnChange);
void QQmlExpression_SetSourceLocation(void* ptr, char* url, int line, int column);
char* QQmlExpression_SourceFile(void* ptr);
void QQmlExpression_ConnectValueChanged(void* ptr);
void QQmlExpression_DisconnectValueChanged(void* ptr);
void QQmlExpression_ValueChanged(void* ptr);
void QQmlExpression_DestroyQQmlExpression(void* ptr);
void QQmlExpression_TimerEvent(void* ptr, void* event);
void QQmlExpression_TimerEventDefault(void* ptr, void* event);
void QQmlExpression_ChildEvent(void* ptr, void* event);
void QQmlExpression_ChildEventDefault(void* ptr, void* event);
void QQmlExpression_ConnectNotify(void* ptr, void* sign);
void QQmlExpression_ConnectNotifyDefault(void* ptr, void* sign);
void QQmlExpression_CustomEvent(void* ptr, void* event);
void QQmlExpression_CustomEventDefault(void* ptr, void* event);
void QQmlExpression_DeleteLater(void* ptr);
void QQmlExpression_DeleteLaterDefault(void* ptr);
void QQmlExpression_DisconnectNotify(void* ptr, void* sign);
void QQmlExpression_DisconnectNotifyDefault(void* ptr, void* sign);
int QQmlExpression_Event(void* ptr, void* e);
int QQmlExpression_EventDefault(void* ptr, void* e);
int QQmlExpression_EventFilter(void* ptr, void* watched, void* event);
int QQmlExpression_EventFilterDefault(void* ptr, void* watched, void* event);
void* QQmlExpression_MetaObject(void* ptr);
void* QQmlExpression_MetaObjectDefault(void* ptr);
void QQmlExtensionPlugin_InitializeEngine(void* ptr, void* engine, char* uri);
void QQmlExtensionPlugin_InitializeEngineDefault(void* ptr, void* engine, char* uri);
void* QQmlExtensionPlugin_NewQQmlExtensionPlugin(void* parent);
void* QQmlExtensionPlugin_BaseUrl(void* ptr);
void QQmlExtensionPlugin_RegisterTypes(void* ptr, char* uri);
void QQmlExtensionPlugin_TimerEvent(void* ptr, void* event);
void QQmlExtensionPlugin_TimerEventDefault(void* ptr, void* event);
void QQmlExtensionPlugin_ChildEvent(void* ptr, void* event);
void QQmlExtensionPlugin_ChildEventDefault(void* ptr, void* event);
void QQmlExtensionPlugin_ConnectNotify(void* ptr, void* sign);
void QQmlExtensionPlugin_ConnectNotifyDefault(void* ptr, void* sign);
void QQmlExtensionPlugin_CustomEvent(void* ptr, void* event);
void QQmlExtensionPlugin_CustomEventDefault(void* ptr, void* event);
void QQmlExtensionPlugin_DeleteLater(void* ptr);
void QQmlExtensionPlugin_DeleteLaterDefault(void* ptr);
void QQmlExtensionPlugin_DisconnectNotify(void* ptr, void* sign);
void QQmlExtensionPlugin_DisconnectNotifyDefault(void* ptr, void* sign);
int QQmlExtensionPlugin_Event(void* ptr, void* e);
int QQmlExtensionPlugin_EventDefault(void* ptr, void* e);
int QQmlExtensionPlugin_EventFilter(void* ptr, void* watched, void* event);
int QQmlExtensionPlugin_EventFilterDefault(void* ptr, void* watched, void* event);
void* QQmlExtensionPlugin_MetaObject(void* ptr);
void* QQmlExtensionPlugin_MetaObjectDefault(void* ptr);
void* QQmlFileSelector_NewQQmlFileSelector(void* engine, void* parent);
void* QQmlFileSelector_QQmlFileSelector_Get(void* engine);
void* QQmlFileSelector_Selector(void* ptr);
void QQmlFileSelector_SetExtraSelectors(void* ptr, char* strin);
void QQmlFileSelector_SetExtraSelectors2(void* ptr, char* strin);
void QQmlFileSelector_SetSelector(void* ptr, void* selector);
void QQmlFileSelector_DestroyQQmlFileSelector(void* ptr);
void QQmlFileSelector_TimerEvent(void* ptr, void* event);
void QQmlFileSelector_TimerEventDefault(void* ptr, void* event);
void QQmlFileSelector_ChildEvent(void* ptr, void* event);
void QQmlFileSelector_ChildEventDefault(void* ptr, void* event);
void QQmlFileSelector_ConnectNotify(void* ptr, void* sign);
void QQmlFileSelector_ConnectNotifyDefault(void* ptr, void* sign);
void QQmlFileSelector_CustomEvent(void* ptr, void* event);
void QQmlFileSelector_CustomEventDefault(void* ptr, void* event);
void QQmlFileSelector_DeleteLater(void* ptr);
void QQmlFileSelector_DeleteLaterDefault(void* ptr);
void QQmlFileSelector_DisconnectNotify(void* ptr, void* sign);
void QQmlFileSelector_DisconnectNotifyDefault(void* ptr, void* sign);
int QQmlFileSelector_Event(void* ptr, void* e);
int QQmlFileSelector_EventDefault(void* ptr, void* e);
int QQmlFileSelector_EventFilter(void* ptr, void* watched, void* event);
int QQmlFileSelector_EventFilterDefault(void* ptr, void* watched, void* event);
void* QQmlFileSelector_MetaObject(void* ptr);
void* QQmlFileSelector_MetaObjectDefault(void* ptr);
int QQmlImageProviderBase_Flags(void* ptr);
int QQmlImageProviderBase_ImageType(void* ptr);
char* QQmlImageProviderBase_ObjectNameAbs(void* ptr);
void QQmlImageProviderBase_SetObjectNameAbs(void* ptr, char* name);
void* QQmlIncubationController_NewQQmlIncubationController();
void* QQmlIncubationController_Engine(void* ptr);
void QQmlIncubationController_IncubateFor(void* ptr, int msecs);
int QQmlIncubationController_IncubatingObjectCount(void* ptr);
void QQmlIncubationController_IncubatingObjectCountChanged(void* ptr, int incubatingObjectCount);
void QQmlIncubationController_IncubatingObjectCountChangedDefault(void* ptr, int incubatingObjectCount);
char* QQmlIncubationController_ObjectNameAbs(void* ptr);
void QQmlIncubationController_SetObjectNameAbs(void* ptr, char* name);
void* QQmlIncubator_NewQQmlIncubator(int mode);
void QQmlIncubator_Clear(void* ptr);
void QQmlIncubator_ForceCompletion(void* ptr);
int QQmlIncubator_IncubationMode(void* ptr);
int QQmlIncubator_IsError(void* ptr);
int QQmlIncubator_IsLoading(void* ptr);
int QQmlIncubator_IsNull(void* ptr);
int QQmlIncubator_IsReady(void* ptr);
void* QQmlIncubator_Object(void* ptr);
void QQmlIncubator_SetInitialState(void* ptr, void* object);
void QQmlIncubator_SetInitialStateDefault(void* ptr, void* object);
int QQmlIncubator_Status(void* ptr);
void QQmlIncubator_StatusChanged(void* ptr, int status);
void QQmlIncubator_StatusChangedDefault(void* ptr, int status);
char* QQmlIncubator_ObjectNameAbs(void* ptr);
void QQmlIncubator_SetObjectNameAbs(void* ptr, char* name);
void* QQmlListReference_NewQQmlListReference();
void* QQmlListReference_NewQQmlListReference2(void* object, char* property, void* engine);
int QQmlListReference_Append(void* ptr, void* object);
void* QQmlListReference_At(void* ptr, int index);
int QQmlListReference_CanAppend(void* ptr);
int QQmlListReference_CanAt(void* ptr);
int QQmlListReference_CanClear(void* ptr);
int QQmlListReference_CanCount(void* ptr);
int QQmlListReference_Clear(void* ptr);
int QQmlListReference_Count(void* ptr);
int QQmlListReference_IsManipulable(void* ptr);
int QQmlListReference_IsReadable(void* ptr);
int QQmlListReference_IsValid(void* ptr);
void* QQmlListReference_ListElementType(void* ptr);
void* QQmlListReference_Object(void* ptr);
void* QQmlNetworkAccessManagerFactory_Create(void* ptr, void* parent);
void QQmlNetworkAccessManagerFactory_DestroyQQmlNetworkAccessManagerFactory(void* ptr);
char* QQmlNetworkAccessManagerFactory_ObjectNameAbs(void* ptr);
void QQmlNetworkAccessManagerFactory_SetObjectNameAbs(void* ptr, char* name);
void QQmlParserStatus_ClassBegin(void* ptr);
void QQmlParserStatus_ComponentComplete(void* ptr);
char* QQmlParserStatus_ObjectNameAbs(void* ptr);
void QQmlParserStatus_SetObjectNameAbs(void* ptr, char* name);
void* QQmlProperty_NewQQmlProperty();
void* QQmlProperty_NewQQmlProperty2(void* obj);
void* QQmlProperty_NewQQmlProperty3(void* obj, void* ctxt);
void* QQmlProperty_NewQQmlProperty4(void* obj, void* engine);
void* QQmlProperty_NewQQmlProperty5(void* obj, char* name);
void* QQmlProperty_NewQQmlProperty6(void* obj, char* name, void* ctxt);
void* QQmlProperty_NewQQmlProperty7(void* obj, char* name, void* engine);
void* QQmlProperty_NewQQmlProperty8(void* other);
int QQmlProperty_ConnectNotifySignal(void* ptr, void* dest, char* slot);
int QQmlProperty_ConnectNotifySignal2(void* ptr, void* dest, int method);
int QQmlProperty_HasNotifySignal(void* ptr);
int QQmlProperty_Index(void* ptr);
int QQmlProperty_IsDesignable(void* ptr);
int QQmlProperty_IsProperty(void* ptr);
int QQmlProperty_IsResettable(void* ptr);
int QQmlProperty_IsSignalProperty(void* ptr);
int QQmlProperty_IsValid(void* ptr);
int QQmlProperty_IsWritable(void* ptr);
void* QQmlProperty_Method(void* ptr);
char* QQmlProperty_Name(void* ptr);
int QQmlProperty_NeedsNotifySignal(void* ptr);
void* QQmlProperty_Object(void* ptr);
int QQmlProperty_PropertyType(void* ptr);
int QQmlProperty_PropertyTypeCategory(void* ptr);
char* QQmlProperty_PropertyTypeName(void* ptr);
void* QQmlProperty_QQmlProperty_Read2(void* object, char* name);
void* QQmlProperty_QQmlProperty_Read3(void* object, char* name, void* ctxt);
void* QQmlProperty_QQmlProperty_Read4(void* object, char* name, void* engine);
void* QQmlProperty_Read(void* ptr);
int QQmlProperty_Reset(void* ptr);
int QQmlProperty_Type(void* ptr);
int QQmlProperty_QQmlProperty_Write2(void* object, char* name, void* value);
int QQmlProperty_QQmlProperty_Write3(void* object, char* name, void* value, void* ctxt);
int QQmlProperty_QQmlProperty_Write4(void* object, char* name, void* value, void* engine);
int QQmlProperty_Write(void* ptr, void* value);
void* QQmlPropertyMap_NewQQmlPropertyMap(void* parent);
void QQmlPropertyMap_Clear(void* ptr, char* key);
int QQmlPropertyMap_Contains(void* ptr, char* key);
int QQmlPropertyMap_Count(void* ptr);
void QQmlPropertyMap_Insert(void* ptr, char* key, void* value);
int QQmlPropertyMap_IsEmpty(void* ptr);
char* QQmlPropertyMap_Keys(void* ptr);
int QQmlPropertyMap_Size(void* ptr);
void* QQmlPropertyMap_UpdateValue(void* ptr, char* key, void* input);
void* QQmlPropertyMap_UpdateValueDefault(void* ptr, char* key, void* input);
void* QQmlPropertyMap_Value(void* ptr, char* key);
void QQmlPropertyMap_ConnectValueChanged(void* ptr);
void QQmlPropertyMap_DisconnectValueChanged(void* ptr);
void QQmlPropertyMap_ValueChanged(void* ptr, char* key, void* value);
void QQmlPropertyMap_DestroyQQmlPropertyMap(void* ptr);
void QQmlPropertyMap_TimerEvent(void* ptr, void* event);
void QQmlPropertyMap_TimerEventDefault(void* ptr, void* event);
void QQmlPropertyMap_ChildEvent(void* ptr, void* event);
void QQmlPropertyMap_ChildEventDefault(void* ptr, void* event);
void QQmlPropertyMap_ConnectNotify(void* ptr, void* sign);
void QQmlPropertyMap_ConnectNotifyDefault(void* ptr, void* sign);
void QQmlPropertyMap_CustomEvent(void* ptr, void* event);
void QQmlPropertyMap_CustomEventDefault(void* ptr, void* event);
void QQmlPropertyMap_DeleteLater(void* ptr);
void QQmlPropertyMap_DeleteLaterDefault(void* ptr);
void QQmlPropertyMap_DisconnectNotify(void* ptr, void* sign);
void QQmlPropertyMap_DisconnectNotifyDefault(void* ptr, void* sign);
int QQmlPropertyMap_Event(void* ptr, void* e);
int QQmlPropertyMap_EventDefault(void* ptr, void* e);
int QQmlPropertyMap_EventFilter(void* ptr, void* watched, void* event);
int QQmlPropertyMap_EventFilterDefault(void* ptr, void* watched, void* event);
void* QQmlPropertyMap_MetaObject(void* ptr);
void* QQmlPropertyMap_MetaObjectDefault(void* ptr);
void* QQmlPropertyValueSource_NewQQmlPropertyValueSource();
void QQmlPropertyValueSource_SetTarget(void* ptr, void* property);
void QQmlPropertyValueSource_DestroyQQmlPropertyValueSource(void* ptr);
char* QQmlPropertyValueSource_ObjectNameAbs(void* ptr);
void QQmlPropertyValueSource_SetObjectNameAbs(void* ptr, char* name);
void* QQmlScriptString_NewQQmlScriptString();
void* QQmlScriptString_NewQQmlScriptString2(void* other);
int QQmlScriptString_BooleanLiteral(void* ptr, int ok);
int QQmlScriptString_IsEmpty(void* ptr);
int QQmlScriptString_IsNullLiteral(void* ptr);
int QQmlScriptString_IsUndefinedLiteral(void* ptr);
double QQmlScriptString_NumberLiteral(void* ptr, int ok);
char* QQmlScriptString_StringLiteral(void* ptr);

#ifdef __cplusplus
}
#endif

#endif