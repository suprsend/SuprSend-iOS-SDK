#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SuprsendCoreConfigModel, SuprsendCoreConfigTable, SuprsendCoreRuntimeQuery<__covariant RowType>, SuprsendCoreEventModel, SuprsendCoreEventTable, SuprsendCoreIOSSSApiCompanion, SuprsendCoreSSUserApi, SuprsendCoreIOSSSApi, SuprsendCoreSuprSendDatabaseCompanion, SuprsendCoreConfigTableAdapter, SuprsendCoreEventTableAdapter, SuprsendCoreConfigModelCompanion, SuprsendCoreKotlinEnumCompanion, SuprsendCoreKotlinEnum<E>, SuprsendCoreLogLevel, SuprsendCoreKotlinArray<T>, SuprsendCoreKotlinThrowable, SuprsendCoreNetworkType, SuprsendCoreEventFlushHandler, SuprsendCoreKotlinUnit, SuprsendCoreKotlinx_serialization_jsonJsonElement, SuprsendCoreEventModelCompanion, SuprsendCorePayloadCreator, SuprsendCoreKotlinx_serialization_jsonJsonElementCompanion, SuprsendCoreKotlinx_serialization_jsonJsonPrimitive, SuprsendCoreKotlinx_coroutines_coreCoroutineDispatcher, SuprsendCoreRuntimeTransacterTransaction, SuprsendCoreKotlinException, SuprsendCoreKotlinRuntimeException, SuprsendCoreKotlinIllegalStateException, SuprsendCoreKotlinx_serialization_jsonJsonPrimitiveCompanion, SuprsendCoreKotlinAbstractCoroutineContextElement, SuprsendCoreKotlinx_coroutines_coreCoroutineDispatcherKey, SuprsendCoreKtor_client_coreHttpRequestData, SuprsendCoreKtor_client_coreHttpResponseData, SuprsendCoreKtor_client_coreHttpClient, SuprsendCoreKtor_client_coreHttpClientEngineConfig, SuprsendCoreKotlinByteArray, SuprsendCoreKotlinx_serialization_coreSerializersModule, SuprsendCoreKotlinx_serialization_coreSerialKind, SuprsendCoreKotlinNothing, SuprsendCoreKotlinAbstractCoroutineContextKey<B, E>, SuprsendCoreKtor_httpUrl, SuprsendCoreKtor_httpHttpMethod, SuprsendCoreKtor_httpOutgoingContent, SuprsendCoreKtor_httpHttpStatusCode, SuprsendCoreKtor_utilsGMTDate, SuprsendCoreKtor_httpHttpProtocolVersion, SuprsendCoreKtor_client_coreHttpClientConfig<T>, SuprsendCoreKtor_eventsEvents, SuprsendCoreKtor_client_coreHttpReceivePipeline, SuprsendCoreKtor_client_coreHttpRequestPipeline, SuprsendCoreKtor_client_coreHttpResponsePipeline, SuprsendCoreKtor_client_coreHttpSendPipeline, SuprsendCoreKtor_client_coreProxyConfig, SuprsendCoreKotlinByteIterator, SuprsendCoreKtor_httpUrlCompanion, SuprsendCoreKtor_httpURLProtocol, SuprsendCoreKtor_httpHttpMethodCompanion, SuprsendCoreKtor_utilsAttributeKey<T>, SuprsendCoreKtor_httpContentType, SuprsendCoreKotlinCancellationException, SuprsendCoreKtor_httpHttpStatusCodeCompanion, SuprsendCoreKtor_utilsGMTDateCompanion, SuprsendCoreKtor_utilsWeekDay, SuprsendCoreKtor_utilsMonth, SuprsendCoreKtor_httpHttpProtocolVersionCompanion, SuprsendCoreKtor_eventsEventDefinition<T>, SuprsendCoreKtor_utilsPipelinePhase, SuprsendCoreKtor_utilsPipeline<TSubject, TContext>, SuprsendCoreKtor_client_coreHttpReceivePipelinePhases, SuprsendCoreKtor_client_coreHttpResponse, SuprsendCoreKtor_client_coreHttpRequestPipelinePhases, SuprsendCoreKtor_client_coreHttpRequestBuilder, SuprsendCoreKtor_client_coreHttpResponsePipelinePhases, SuprsendCoreKtor_client_coreHttpResponseContainer, SuprsendCoreKtor_client_coreHttpClientCall, SuprsendCoreKtor_client_coreHttpSendPipelinePhases, SuprsendCoreKtor_httpURLProtocolCompanion, SuprsendCoreKtor_httpHeaderValueParam, SuprsendCoreKtor_httpHeaderValueWithParametersCompanion, SuprsendCoreKtor_httpHeaderValueWithParameters, SuprsendCoreKtor_httpContentTypeCompanion, SuprsendCoreKtor_utilsWeekDayCompanion, SuprsendCoreKtor_utilsMonthCompanion, SuprsendCoreKtor_httpHeadersBuilder, SuprsendCoreKtor_client_coreHttpRequestBuilderCompanion, SuprsendCoreKtor_httpURLBuilder, SuprsendCoreKtor_utilsTypeInfo, SuprsendCoreKtor_client_coreHttpClientCallCompanion, SuprsendCoreKotlinx_coroutines_coreAtomicDesc, SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp, SuprsendCoreKtor_ioMemory, SuprsendCoreKtor_ioChunkBuffer, SuprsendCoreKtor_ioBuffer, SuprsendCoreKtor_ioByteReadPacket, SuprsendCoreKtor_utilsStringValuesBuilderImpl, SuprsendCoreKtor_httpURLBuilderCompanion, SuprsendCoreKotlinx_coroutines_coreAtomicOp<__contravariant T>, SuprsendCoreKotlinx_coroutines_coreOpDescriptor, SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode, SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc, SuprsendCoreKtor_ioMemoryCompanion, SuprsendCoreKtor_ioBufferCompanion, SuprsendCoreKtor_ioChunkBufferCompanion, SuprsendCoreKtor_ioInputCompanion, SuprsendCoreKtor_ioInput, SuprsendCoreKtor_ioByteReadPacketCompanion, SuprsendCoreKotlinKTypeProjection, SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T>, SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T>, SuprsendCoreKotlinKVariance, SuprsendCoreKotlinKTypeProjectionCompanion;

@protocol SuprsendCoreRuntimeColumnAdapter, SuprsendCoreRuntimeTransactionWithoutReturn, SuprsendCoreRuntimeTransactionWithReturn, SuprsendCoreRuntimeTransacter, SuprsendCoreMutationHandler, SuprsendCoreConfigTableQueries, SuprsendCoreEventTableQueries, SuprsendCoreSuprSendDatabase, SuprsendCoreRuntimeSqlDriver, SuprsendCoreRuntimeSqlDriverSchema, SuprsendCoreKotlinx_serialization_coreKSerializer, SuprsendCoreKotlinComparable, SuprsendCoreKtor_client_coreHttpClientEngine, SuprsendCoreRuntimeSqlCursor, SuprsendCoreRuntimeQueryListener, SuprsendCoreRuntimeTransactionCallbacks, SuprsendCoreRuntimeSqlPreparedStatement, SuprsendCoreRuntimeCloseable, SuprsendCoreKotlinx_serialization_coreEncoder, SuprsendCoreKotlinx_serialization_coreSerialDescriptor, SuprsendCoreKotlinx_serialization_coreSerializationStrategy, SuprsendCoreKotlinx_serialization_coreDecoder, SuprsendCoreKotlinx_serialization_coreDeserializationStrategy, SuprsendCoreKotlinIterator, SuprsendCoreKotlinCoroutineContextKey, SuprsendCoreKotlinCoroutineContextElement, SuprsendCoreKotlinCoroutineContext, SuprsendCoreKotlinContinuation, SuprsendCoreKotlinContinuationInterceptor, SuprsendCoreKotlinx_coroutines_coreRunnable, SuprsendCoreKtor_client_coreHttpClientEngineCapability, SuprsendCoreKotlinx_coroutines_coreCoroutineScope, SuprsendCoreKtor_ioCloseable, SuprsendCoreKotlinx_serialization_coreCompositeEncoder, SuprsendCoreKotlinAnnotation, SuprsendCoreKotlinx_serialization_coreCompositeDecoder, SuprsendCoreKtor_httpHeaders, SuprsendCoreKotlinx_coroutines_coreJob, SuprsendCoreKtor_utilsAttributes, SuprsendCoreKotlinx_serialization_coreSerializersModuleCollector, SuprsendCoreKotlinKClass, SuprsendCoreKtor_httpParameters, SuprsendCoreKotlinMapEntry, SuprsendCoreKtor_utilsStringValues, SuprsendCoreKotlinx_coroutines_coreChildHandle, SuprsendCoreKotlinx_coroutines_coreChildJob, SuprsendCoreKotlinx_coroutines_coreDisposableHandle, SuprsendCoreKotlinSequence, SuprsendCoreKotlinx_coroutines_coreSelectClause0, SuprsendCoreKtor_client_coreHttpClientPlugin, SuprsendCoreKotlinSuspendFunction2, SuprsendCoreKotlinKDeclarationContainer, SuprsendCoreKotlinKAnnotatedElement, SuprsendCoreKotlinKClassifier, SuprsendCoreKotlinx_coroutines_coreParentJob, SuprsendCoreKotlinx_coroutines_coreSelectInstance, SuprsendCoreKotlinSuspendFunction0, SuprsendCoreKotlinFunction, SuprsendCoreKtor_httpHttpMessage, SuprsendCoreKtor_ioByteReadChannel, SuprsendCoreKtor_httpHttpMessageBuilder, SuprsendCoreKtor_client_coreHttpRequest, SuprsendCoreKtor_ioReadSession, SuprsendCoreKotlinSuspendFunction1, SuprsendCoreKotlinAppendable, SuprsendCoreKtor_utilsStringValuesBuilder, SuprsendCoreKtor_httpParametersBuilder, SuprsendCoreKotlinKType, SuprsendCoreKtor_ioObjectPool;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface SuprsendCoreBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface SuprsendCoreBase (SuprsendCoreBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface SuprsendCoreMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SuprsendCoreMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorSuprsendCoreKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface SuprsendCoreNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface SuprsendCoreByte : SuprsendCoreNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface SuprsendCoreUByte : SuprsendCoreNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface SuprsendCoreShort : SuprsendCoreNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface SuprsendCoreUShort : SuprsendCoreNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface SuprsendCoreInt : SuprsendCoreNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface SuprsendCoreUInt : SuprsendCoreNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface SuprsendCoreLong : SuprsendCoreNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface SuprsendCoreULong : SuprsendCoreNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface SuprsendCoreFloat : SuprsendCoreNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface SuprsendCoreDouble : SuprsendCoreNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface SuprsendCoreBoolean : SuprsendCoreNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigTable")))
@interface SuprsendCoreConfigTable : SuprsendCoreBase
- (instancetype)initWithKey:(NSString *)key value_:(SuprsendCoreConfigModel *)value_ __attribute__((swift_name("init(key:value_:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SuprsendCoreConfigModel *)component2 __attribute__((swift_name("component2()")));
- (SuprsendCoreConfigTable *)doCopyKey:(NSString *)key value_:(SuprsendCoreConfigModel *)value_ __attribute__((swift_name("doCopy(key:value_:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *key __attribute__((swift_name("key")));
@property (readonly) SuprsendCoreConfigModel *value_ __attribute__((swift_name("value_")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigTable.Adapter")))
@interface SuprsendCoreConfigTableAdapter : SuprsendCoreBase
- (instancetype)initWithValue_Adapter:(id<SuprsendCoreRuntimeColumnAdapter>)value_Adapter __attribute__((swift_name("init(value_Adapter:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<SuprsendCoreRuntimeColumnAdapter> value_Adapter __attribute__((swift_name("value_Adapter")));
@end;

__attribute__((swift_name("RuntimeTransacter")))
@protocol SuprsendCoreRuntimeTransacter
@required
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(id<SuprsendCoreRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(noEnclosing:body:)")));
- (id _Nullable)transactionWithResultNoEnclosing:(BOOL)noEnclosing bodyWithReturn:(id _Nullable (^)(id<SuprsendCoreRuntimeTransactionWithReturn>))bodyWithReturn __attribute__((swift_name("transactionWithResult(noEnclosing:bodyWithReturn:)")));
@end;

__attribute__((swift_name("ConfigTableQueries")))
@protocol SuprsendCoreConfigTableQueries <SuprsendCoreRuntimeTransacter>
@required
- (SuprsendCoreRuntimeQuery<SuprsendCoreConfigTable *> *)getKey:(NSString *)key __attribute__((swift_name("get(key:)")));
- (SuprsendCoreRuntimeQuery<id> *)getKey:(NSString *)key mapper:(id (^)(NSString *, SuprsendCoreConfigModel *))mapper __attribute__((swift_name("get(key:mapper:)")));
- (void)insertKey:(NSString *)key value_:(SuprsendCoreConfigModel *)value_ __attribute__((swift_name("insert(key:value_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventTable")))
@interface SuprsendCoreEventTable : SuprsendCoreBase
- (instancetype)initWithId:(NSString *)id model:(SuprsendCoreEventModel * _Nullable)model isDirty:(int64_t)isDirty timeStamp:(int64_t)timeStamp __attribute__((swift_name("init(id:model:isDirty:timeStamp:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SuprsendCoreEventModel * _Nullable)component2 __attribute__((swift_name("component2()")));
- (int64_t)component3 __attribute__((swift_name("component3()")));
- (int64_t)component4 __attribute__((swift_name("component4()")));
- (SuprsendCoreEventTable *)doCopyId:(NSString *)id model:(SuprsendCoreEventModel * _Nullable)model isDirty:(int64_t)isDirty timeStamp:(int64_t)timeStamp __attribute__((swift_name("doCopy(id:model:isDirty:timeStamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) int64_t isDirty __attribute__((swift_name("isDirty")));
@property (readonly) SuprsendCoreEventModel * _Nullable model __attribute__((swift_name("model")));
@property (readonly) int64_t timeStamp __attribute__((swift_name("timeStamp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventTable.Adapter")))
@interface SuprsendCoreEventTableAdapter : SuprsendCoreBase
- (instancetype)initWithModelAdapter:(id<SuprsendCoreRuntimeColumnAdapter>)modelAdapter __attribute__((swift_name("init(modelAdapter:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<SuprsendCoreRuntimeColumnAdapter> modelAdapter __attribute__((swift_name("modelAdapter")));
@end;

__attribute__((swift_name("EventTableQueries")))
@protocol SuprsendCoreEventTableQueries <SuprsendCoreRuntimeTransacter>
@required
- (void)deleteId:(id)id __attribute__((swift_name("delete(id:)")));
- (SuprsendCoreRuntimeQuery<SuprsendCoreEventTable *> *)getTrackedEventsIsDirty:(int64_t)isDirty limit:(int64_t)limit __attribute__((swift_name("getTrackedEvents(isDirty:limit:)")));
- (SuprsendCoreRuntimeQuery<id> *)getTrackedEventsIsDirty:(int64_t)isDirty limit:(int64_t)limit mapper:(id (^)(NSString *, SuprsendCoreEventModel * _Nullable, SuprsendCoreLong *, SuprsendCoreLong *))mapper __attribute__((swift_name("getTrackedEvents(isDirty:limit:mapper:)")));
- (void)trackId:(NSString *)id model:(SuprsendCoreEventModel * _Nullable)model isDirty:(int64_t)isDirty timeStamp:(int64_t)timeStamp __attribute__((swift_name("track(id:model:isDirty:timeStamp:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Greeting")))
@interface SuprsendCoreGreeting : SuprsendCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greeting __attribute__((swift_name("greeting()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSSSApi")))
@interface SuprsendCoreIOSSSApi : SuprsendCoreBase
@property (class, readonly, getter=companion) SuprsendCoreIOSSSApiCompanion *companion __attribute__((swift_name("companion")));
- (void)flush __attribute__((swift_name("flush()")));
- (SuprsendCoreSSUserApi *)getUser __attribute__((swift_name("getUser()")));
- (void)identifyUniqueId:(NSString *)uniqueId __attribute__((swift_name("identify(uniqueId:)")));
- (void)purchaseMadeProperties:(NSDictionary<NSString *, id> *)properties __attribute__((swift_name("purchaseMade(properties:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)setSuperPropertiesProperties:(NSDictionary<NSString *, id> *)properties __attribute__((swift_name("setSuperProperties(properties:)")));
- (void)setSuperPropertyKey:(NSString *)key value:(id)value __attribute__((swift_name("setSuperProperty(key:value:)")));
- (void)trackEventName:(NSString *)eventName __attribute__((swift_name("track(eventName:)")));
- (void)trackEventName:(NSString *)eventName properties:(NSDictionary<NSString *, id> * _Nullable)properties __attribute__((swift_name("track(eventName:properties:)")));
- (void)unSetSuperPropertyKey:(NSString *)key __attribute__((swift_name("unSetSuperProperty(key:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSSSApi.Companion")))
@interface SuprsendCoreIOSSSApiCompanion : SuprsendCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SuprsendCoreIOSSSApiCompanion *shared __attribute__((swift_name("shared")));
- (void)enableLogging __attribute__((swift_name("enableLogging()")));
- (SuprsendCoreIOSSSApi *)getInstanceApiKey:(NSString *)apiKey apiSecret:(NSString *)apiSecret apiBaseUrl:(NSString * _Nullable)apiBaseUrl mutationHandler:(id<SuprsendCoreMutationHandler>)mutationHandler __attribute__((swift_name("getInstance(apiKey:apiSecret:apiBaseUrl:mutationHandler:)")));
- (SuprsendCoreIOSSSApi * _Nullable)getInstanceFromCachedApiKeyMutationHandler:(id<SuprsendCoreMutationHandler>)mutationHandler __attribute__((swift_name("getInstanceFromCachedApiKey(mutationHandler:)")));
- (void)initialize __attribute__((swift_name("initialize()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Information")))
@interface SuprsendCoreInformation : SuprsendCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)getDefaultProperties __attribute__((swift_name("getDefaultProperties()")));
@end;

__attribute__((swift_name("MutationHandler")))
@protocol SuprsendCoreMutationHandler
@required
- (BOOL)isFlushing __attribute__((swift_name("isFlushing()")));
- (void)setFlushingValue:(BOOL)value __attribute__((swift_name("setFlushing(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform")))
@interface SuprsendCorePlatform : SuprsendCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SSUserApi")))
@interface SuprsendCoreSSUserApi : SuprsendCoreBase
- (instancetype)initWithMutationHandler:(id<SuprsendCoreMutationHandler>)mutationHandler __attribute__((swift_name("init(mutationHandler:)"))) __attribute__((objc_designated_initializer));
- (void)appendKey:(NSString *)key value:(id)value __attribute__((swift_name("append(key:value:)")));
- (void)incrementKey:(NSString *)key value:(id)value __attribute__((swift_name("increment(key:value:)")));
- (void)incrementProperties:(NSDictionary<NSString *, id> *)properties __attribute__((swift_name("increment(properties:)")));
- (void)removeKey:(NSString *)key value:(id)value __attribute__((swift_name("remove(key:value:)")));
- (void)setKey:(NSString *)key value:(id)value __attribute__((swift_name("set(key:value:)")));
- (void)setProperties:(NSDictionary<NSString *, id> *)properties __attribute__((swift_name("set(properties:)")));
- (void)setEmailEmail:(NSString *)email __attribute__((swift_name("setEmail(email:)")));
- (void)setIOSPushToken:(NSString *)token __attribute__((swift_name("setIOSPush(token:)")));
- (void)setOnceKey:(NSString *)key value:(id)value __attribute__((swift_name("setOnce(key:value:)")));
- (void)setOnceProperties:(NSDictionary<NSString *, id> *)properties __attribute__((swift_name("setOnce(properties:)")));
- (void)setSmsMobile:(NSString *)mobile __attribute__((swift_name("setSms(mobile:)")));
- (void)setWhatsAppMobile:(NSString *)mobile __attribute__((swift_name("setWhatsApp(mobile:)")));
- (void)unSetKey:(NSString *)key __attribute__((swift_name("unSet(key:)")));
- (void)unSetKeys:(NSArray<NSString *> *)keys __attribute__((swift_name("unSet(keys:)")));
- (void)unSetEmailEmail:(NSString *)email __attribute__((swift_name("unSetEmail(email:)")));
- (void)unSetIOSPushToken:(NSString *)token __attribute__((swift_name("unSetIOSPush(token:)")));
- (void)unSetSmsMobile:(NSString *)mobile __attribute__((swift_name("unSetSms(mobile:)")));
- (void)unSetWhatsAppMobile:(NSString *)mobile __attribute__((swift_name("unSetWhatsApp(mobile:)")));
@end;

__attribute__((swift_name("SuprSendDatabase")))
@protocol SuprsendCoreSuprSendDatabase <SuprsendCoreRuntimeTransacter>
@required
@property (readonly) id<SuprsendCoreConfigTableQueries> configTableQueries __attribute__((swift_name("configTableQueries")));
@property (readonly) id<SuprsendCoreEventTableQueries> eventTableQueries __attribute__((swift_name("eventTableQueries")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SuprSendDatabaseCompanion")))
@interface SuprsendCoreSuprSendDatabaseCompanion : SuprsendCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SuprsendCoreSuprSendDatabaseCompanion *shared __attribute__((swift_name("shared")));
- (id<SuprsendCoreSuprSendDatabase>)invokeDriver:(id<SuprsendCoreRuntimeSqlDriver>)driver ConfigTableAdapter:(SuprsendCoreConfigTableAdapter *)ConfigTableAdapter EventTableAdapter:(SuprsendCoreEventTableAdapter *)EventTableAdapter __attribute__((swift_name("invoke(driver:ConfigTableAdapter:EventTableAdapter:)")));
@property (readonly) id<SuprsendCoreRuntimeSqlDriverSchema> Schema __attribute__((swift_name("Schema")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigModel")))
@interface SuprsendCoreConfigModel : SuprsendCoreBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SuprsendCoreConfigModelCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SuprsendCoreConfigModel *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigModel.Companion")))
@interface SuprsendCoreConfigModelCompanion : SuprsendCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SuprsendCoreConfigModelCompanion *shared __attribute__((swift_name("shared")));
- (id<SuprsendCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol SuprsendCoreKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface SuprsendCoreKotlinEnum<E> : SuprsendCoreBase <SuprsendCoreKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SuprsendCoreKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogLevel")))
@interface SuprsendCoreLogLevel : SuprsendCoreKotlinEnum<SuprsendCoreLogLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SuprsendCoreLogLevel *verbose __attribute__((swift_name("verbose")));
@property (class, readonly) SuprsendCoreLogLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) SuprsendCoreLogLevel *info __attribute__((swift_name("info")));
@property (class, readonly) SuprsendCoreLogLevel *error __attribute__((swift_name("error")));
@property (class, readonly) SuprsendCoreLogLevel *off __attribute__((swift_name("off")));
+ (SuprsendCoreKotlinArray<SuprsendCoreLogLevel *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t num __attribute__((swift_name("num")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoggerKMM")))
@interface SuprsendCoreLoggerKMM : SuprsendCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)dTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("d(tag:message:)")));
- (void)dTag:(NSString *)tag message:(NSString *)message throwable:(SuprsendCoreKotlinThrowable *)throwable __attribute__((swift_name("d(tag:message:throwable:)")));
- (void)eTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("e(tag:message:)")));
- (void)eTag:(NSString *)tag message:(NSString *)message throwable:(SuprsendCoreKotlinThrowable * _Nullable)throwable __attribute__((swift_name("e(tag:message:throwable:)")));
- (void)iTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("i(tag:message:)")));
- (void)iTag:(NSString *)tag message:(NSString *)message throwable:(SuprsendCoreKotlinThrowable *)throwable __attribute__((swift_name("i(tag:message:throwable:)")));
- (void)vTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("v(tag:message:)")));
- (void)vTag:(NSString *)tag message:(NSString *)message throwable:(SuprsendCoreKotlinThrowable *)throwable __attribute__((swift_name("v(tag:message:throwable:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkType")))
@interface SuprsendCoreNetworkType : SuprsendCoreKotlinEnum<SuprsendCoreNetworkType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SuprsendCoreNetworkType *wifi __attribute__((swift_name("wifi")));
@property (class, readonly) SuprsendCoreNetworkType *g2 __attribute__((swift_name("g2")));
@property (class, readonly) SuprsendCoreNetworkType *g3 __attribute__((swift_name("g3")));
@property (class, readonly) SuprsendCoreNetworkType *g4 __attribute__((swift_name("g4")));
@property (class, readonly) SuprsendCoreNetworkType *g5 __attribute__((swift_name("g5")));
@property (class, readonly) SuprsendCoreNetworkType *unknown __attribute__((swift_name("unknown")));
+ (SuprsendCoreKotlinArray<SuprsendCoreNetworkType *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *readableName __attribute__((swift_name("readableName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventFlushHandler")))
@interface SuprsendCoreEventFlushHandler : SuprsendCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eventFlushHandler __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SuprsendCoreEventFlushHandler *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)flushEventsWithCompletionHandler:(void (^)(SuprsendCoreKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("flushEvents(completionHandler:)")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventModel")))
@interface SuprsendCoreEventModel : SuprsendCoreBase
- (instancetype)initWithValue:(SuprsendCoreKotlinx_serialization_jsonJsonElement *)value id:(NSString *)id __attribute__((swift_name("init(value:id:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SuprsendCoreEventModelCompanion *companion __attribute__((swift_name("companion")));
- (SuprsendCoreKotlinx_serialization_jsonJsonElement *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SuprsendCoreEventModel *)doCopyValue:(SuprsendCoreKotlinx_serialization_jsonJsonElement *)value id:(NSString *)id __attribute__((swift_name("doCopy(value:id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) SuprsendCoreKotlinx_serialization_jsonJsonElement *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventModel.Companion")))
@interface SuprsendCoreEventModelCompanion : SuprsendCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SuprsendCoreEventModelCompanion *shared __attribute__((swift_name("shared")));
- (id<SuprsendCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PayloadCreator")))
@interface SuprsendCorePayloadCreator : SuprsendCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)payloadCreator __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SuprsendCorePayloadCreator *shared __attribute__((swift_name("shared")));
- (NSDictionary<NSString *, SuprsendCoreKotlinx_serialization_jsonJsonElement *> *)buildIdentityEventPayloadIdentifiedId:(NSString *)identifiedId anonymousId:(NSString *)anonymousId apiKey:(NSString *)apiKey __attribute__((swift_name("buildIdentityEventPayload(identifiedId:anonymousId:apiKey:)")));
- (NSDictionary<NSString *, SuprsendCoreKotlinx_serialization_jsonJsonElement *> *)buildTrackEventPayloadEventName:(NSString *)eventName distinctId:(NSString *)distinctId superProperties:(NSDictionary<NSString *, SuprsendCoreKotlinx_serialization_jsonJsonElement *> *)superProperties defaultProperties:(NSDictionary<NSString *, SuprsendCoreKotlinx_serialization_jsonJsonElement *> *)defaultProperties userProperties:(NSDictionary<NSString *, SuprsendCoreKotlinx_serialization_jsonJsonElement *> * _Nullable)userProperties apiKey:(NSString *)apiKey __attribute__((swift_name("buildTrackEventPayload(eventName:distinctId:superProperties:defaultProperties:userProperties:apiKey:)")));
- (NSDictionary<NSString *, SuprsendCoreKotlinx_serialization_jsonJsonElement *> *)buildUserOperatorPayloadDistinctId:(NSString *)distinctId setProperties:(SuprsendCoreKotlinx_serialization_jsonJsonElement *)setProperties operator:(NSString *)operator_ apiKey:(NSString *)apiKey __attribute__((swift_name("buildUserOperatorPayload(distinctId:setProperties:operator:apiKey:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DatabaseDriverFactory")))
@interface SuprsendCoreDatabaseDriverFactory : SuprsendCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<SuprsendCoreRuntimeSqlDriver>)createDriver __attribute__((swift_name("createDriver()")));
- (NSString *)getDatabaseName __attribute__((swift_name("getDatabaseName()")));
@end;

__attribute__((swift_name("UserEventDataSourceContract")))
@protocol SuprsendCoreUserEventDataSourceContract
@required
- (void)deleteIds:(NSArray<NSString *> *)ids __attribute__((swift_name("delete(ids:)")));
- (NSArray<SuprsendCoreEventModel *> *)getEventsLimit:(int64_t)limit isDirty:(BOOL)isDirty __attribute__((swift_name("getEvents(limit:isDirty:)")));
- (void)trackEventModel:(SuprsendCoreEventModel *)eventModel isDirty:(BOOL)isDirty __attribute__((swift_name("track(eventModel:isDirty:)")));
@end;

__attribute__((swift_name("UserApiInternalContract")))
@protocol SuprsendCoreUserApiInternalContract
@required
- (void)appendPropertiesJson:(NSString *)propertiesJson __attribute__((swift_name("append(propertiesJson:)")));
- (void)appendKey:(NSString *)key value:(id)value __attribute__((swift_name("append(key:value:)")));
- (void)incrementPropertiesJson:(NSString *)propertiesJson __attribute__((swift_name("increment(propertiesJson:)")));
- (void)incrementKey:(NSString *)key value:(id)value __attribute__((swift_name("increment(key:value:)")));
- (void)removePropertiesJson:(NSString *)propertiesJson __attribute__((swift_name("remove(propertiesJson:)")));
- (void)removeKey:(NSString *)key value:(id)value __attribute__((swift_name("remove(key:value:)")));
- (void)setPropertiesJson:(NSString *)propertiesJson __attribute__((swift_name("set(propertiesJson:)")));
- (void)setKey:(NSString *)key value:(id)value __attribute__((swift_name("set(key:value:)")));
- (void)setAndroidFcmPushNewToken:(NSString *)newToken __attribute__((swift_name("setAndroidFcmPush(newToken:)")));
- (void)setAndroidXiaomiPushNewToken:(NSString *)newToken __attribute__((swift_name("setAndroidXiaomiPush(newToken:)")));
- (void)setEmailEmail:(NSString *)email __attribute__((swift_name("setEmail(email:)")));
- (void)setIOSPushNewToken:(NSString *)newToken __attribute__((swift_name("setIOSPush(newToken:)")));
- (void)setOncePropertiesJson:(NSString *)propertiesJson __attribute__((swift_name("setOnce(propertiesJson:)")));
- (void)setOnceKey:(NSString *)key value:(id)value __attribute__((swift_name("setOnce(key:value:)")));
- (void)setSmsMobile:(NSString *)mobile __attribute__((swift_name("setSms(mobile:)")));
- (void)setWhatsAppMobile:(NSString *)mobile __attribute__((swift_name("setWhatsApp(mobile:)")));
- (void)unSetKey:(NSString *)key __attribute__((swift_name("unSet(key:)")));
- (void)unSetKeys:(NSArray<NSString *> *)keys __attribute__((swift_name("unSet(keys:)")));
- (void)unSetAndroidFcmPushToken:(NSString *)token __attribute__((swift_name("unSetAndroidFcmPush(token:)")));
- (void)unSetAndroidXiaomiPushToken:(NSString *)token __attribute__((swift_name("unSetAndroidXiaomiPush(token:)")));
- (void)unSetEmailEmail:(NSString *)email __attribute__((swift_name("unSetEmail(email:)")));
- (void)unSetIOSPushToken:(NSString *)token __attribute__((swift_name("unSetIOSPush(token:)")));
- (void)unSetSmsMobile:(NSString *)mobile __attribute__((swift_name("unSetSms(mobile:)")));
- (void)unSetWhatsAppMobile:(NSString *)mobile __attribute__((swift_name("unSetWhatsApp(mobile:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface SuprsendCoreKotlinx_serialization_jsonJsonElement : SuprsendCoreBase
@property (class, readonly, getter=companion) SuprsendCoreKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end;

@interface SuprsendCoreKotlinx_serialization_jsonJsonElement (Extensions)
- (SuprsendCoreKotlinx_serialization_jsonJsonElement * _Nullable)addUpdateJsoObjectUpdateJsonObject:(NSDictionary<NSString *, SuprsendCoreKotlinx_serialization_jsonJsonElement *> *)updateJsonObject __attribute__((swift_name("addUpdateJsoObject(updateJsonObject:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinExtensionKt")))
@interface SuprsendCoreKotlinExtensionKt : SuprsendCoreBase
+ (NSString *)getRandomStringLength:(int32_t)length __attribute__((swift_name("getRandomString(length:)")));
+ (NSDictionary<NSString *, SuprsendCoreKotlinx_serialization_jsonJsonElement *> *)addCreateNewJO:(NSDictionary<NSString *, SuprsendCoreKotlinx_serialization_jsonJsonElement *> *)receiver key:(NSString *)key value:(id)value __attribute__((swift_name("addCreateNewJO(_:key:value:)")));
+ (NSDictionary<NSString *, SuprsendCoreKotlinx_serialization_jsonJsonElement *> *)addUpdateJsoObject:(NSDictionary<NSString *, SuprsendCoreKotlinx_serialization_jsonJsonElement *> * _Nullable)receiver updateJsonObject:(NSDictionary<NSString *, SuprsendCoreKotlinx_serialization_jsonJsonElement *> *)updateJsonObject __attribute__((swift_name("addUpdateJsoObject(_:updateJsonObject:)")));
+ (SuprsendCoreKotlinx_serialization_jsonJsonPrimitive * _Nullable)convertToJsonPrimitive:(id)receiver key:(NSString *)key __attribute__((swift_name("convertToJsonPrimitive(_:key:)")));
+ (BOOL)isInValidKey:(NSString *)receiver __attribute__((swift_name("isInValidKey(_:)")));
+ (NSDictionary<NSString *, SuprsendCoreKotlinx_serialization_jsonJsonElement *> *)toJsonObject:(NSDictionary<NSString *, id> *)receiver __attribute__((swift_name("toJsonObject(_:)")));
+ (NSDictionary<NSString *, SuprsendCoreKotlinx_serialization_jsonJsonElement *> *)toKotlinJsonObject:(NSString * _Nullable)receiver __attribute__((swift_name("toKotlinJsonObject(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DispatchersKt")))
@interface SuprsendCoreDispatchersKt : SuprsendCoreBase
+ (SuprsendCoreKotlinx_coroutines_coreCoroutineDispatcher *)ioDispatcher __attribute__((swift_name("ioDispatcher()")));
+ (SuprsendCoreKotlinx_coroutines_coreCoroutineDispatcher *)mainDispatcher __attribute__((swift_name("mainDispatcher()")));
+ (SuprsendCoreKotlinx_coroutines_coreCoroutineDispatcher *)singleThreadDispatcher __attribute__((swift_name("singleThreadDispatcher()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonKt")))
@interface SuprsendCoreCommonKt : SuprsendCoreBase
+ (BOOL)isMobileNumberValidMobile:(NSString *)mobile __attribute__((swift_name("isMobileNumberValid(mobile:)")));
+ (NSString *)uuid __attribute__((swift_name("uuid()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpClientEngineKt")))
@interface SuprsendCoreHttpClientEngineKt : SuprsendCoreBase
@property (class, readonly) id<SuprsendCoreKtor_client_coreHttpClientEngine> httpClientEngine __attribute__((swift_name("httpClientEngine")));
@end;

__attribute__((swift_name("RuntimeColumnAdapter")))
@protocol SuprsendCoreRuntimeColumnAdapter
@required
- (id)decodeDatabaseValue:(id _Nullable)databaseValue __attribute__((swift_name("decode(databaseValue:)")));
- (id _Nullable)encodeValue:(id)value __attribute__((swift_name("encode(value:)")));
@end;

__attribute__((swift_name("RuntimeQuery")))
@interface SuprsendCoreRuntimeQuery<__covariant RowType> : SuprsendCoreBase
- (instancetype)initWithQueries:(NSMutableArray<SuprsendCoreRuntimeQuery<id> *> *)queries mapper:(RowType (^)(id<SuprsendCoreRuntimeSqlCursor>))mapper __attribute__((swift_name("init(queries:mapper:)"))) __attribute__((objc_designated_initializer));
- (void)addListenerListener:(id<SuprsendCoreRuntimeQueryListener>)listener __attribute__((swift_name("addListener(listener:)")));
- (id<SuprsendCoreRuntimeSqlCursor>)execute __attribute__((swift_name("execute()")));
- (NSArray<RowType> *)executeAsList __attribute__((swift_name("executeAsList()")));
- (RowType)executeAsOne __attribute__((swift_name("executeAsOne()")));
- (RowType _Nullable)executeAsOneOrNull __attribute__((swift_name("executeAsOneOrNull()")));
- (void)notifyDataChanged __attribute__((swift_name("notifyDataChanged()")));
- (void)removeListenerListener:(id<SuprsendCoreRuntimeQueryListener>)listener __attribute__((swift_name("removeListener(listener:)")));
@property (readonly) RowType (^mapper)(id<SuprsendCoreRuntimeSqlCursor>) __attribute__((swift_name("mapper")));
@end;

__attribute__((swift_name("RuntimeTransactionCallbacks")))
@protocol SuprsendCoreRuntimeTransactionCallbacks
@required
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
@end;

__attribute__((swift_name("RuntimeTransactionWithoutReturn")))
@protocol SuprsendCoreRuntimeTransactionWithoutReturn <SuprsendCoreRuntimeTransactionCallbacks>
@required
- (void)rollback __attribute__((swift_name("rollback()")));
- (void)transactionBody:(void (^)(id<SuprsendCoreRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(body:)")));
@end;

__attribute__((swift_name("RuntimeTransactionWithReturn")))
@protocol SuprsendCoreRuntimeTransactionWithReturn <SuprsendCoreRuntimeTransactionCallbacks>
@required
- (void)rollbackReturnValue:(id _Nullable)returnValue __attribute__((swift_name("rollback(returnValue:)")));
- (id _Nullable)transactionBody_:(id _Nullable (^)(id<SuprsendCoreRuntimeTransactionWithReturn>))body __attribute__((swift_name("transaction(body_:)")));
@end;

__attribute__((swift_name("RuntimeCloseable")))
@protocol SuprsendCoreRuntimeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("RuntimeSqlDriver")))
@protocol SuprsendCoreRuntimeSqlDriver <SuprsendCoreRuntimeCloseable>
@required
- (SuprsendCoreRuntimeTransacterTransaction * _Nullable)currentTransaction __attribute__((swift_name("currentTransaction()")));
- (void)executeIdentifier:(SuprsendCoreInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<SuprsendCoreRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("execute(identifier:sql:parameters:binders:)")));
- (id<SuprsendCoreRuntimeSqlCursor>)executeQueryIdentifier:(SuprsendCoreInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<SuprsendCoreRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("executeQuery(identifier:sql:parameters:binders:)")));
- (SuprsendCoreRuntimeTransacterTransaction *)doNewTransaction __attribute__((swift_name("doNewTransaction()")));
@end;

__attribute__((swift_name("RuntimeSqlDriverSchema")))
@protocol SuprsendCoreRuntimeSqlDriverSchema
@required
- (void)createDriver:(id<SuprsendCoreRuntimeSqlDriver>)driver __attribute__((swift_name("create(driver:)")));
- (void)migrateDriver:(id<SuprsendCoreRuntimeSqlDriver>)driver oldVersion:(int32_t)oldVersion newVersion:(int32_t)newVersion __attribute__((swift_name("migrate(driver:oldVersion:newVersion:)")));
@property (readonly) int32_t version __attribute__((swift_name("version")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol SuprsendCoreKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<SuprsendCoreKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<SuprsendCoreKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol SuprsendCoreKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<SuprsendCoreKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<SuprsendCoreKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol SuprsendCoreKotlinx_serialization_coreKSerializer <SuprsendCoreKotlinx_serialization_coreSerializationStrategy, SuprsendCoreKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface SuprsendCoreKotlinEnumCompanion : SuprsendCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SuprsendCoreKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SuprsendCoreKotlinArray<T> : SuprsendCoreBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(SuprsendCoreInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SuprsendCoreKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface SuprsendCoreKotlinThrowable : SuprsendCoreBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SuprsendCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SuprsendCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (SuprsendCoreKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SuprsendCoreKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface SuprsendCoreKotlinException : SuprsendCoreKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SuprsendCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SuprsendCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface SuprsendCoreKotlinRuntimeException : SuprsendCoreKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SuprsendCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SuprsendCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface SuprsendCoreKotlinIllegalStateException : SuprsendCoreKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SuprsendCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SuprsendCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface SuprsendCoreKotlinCancellationException : SuprsendCoreKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SuprsendCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SuprsendCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface SuprsendCoreKotlinUnit : SuprsendCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SuprsendCoreKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface SuprsendCoreKotlinx_serialization_jsonJsonElementCompanion : SuprsendCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SuprsendCoreKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<SuprsendCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_jsonJsonPrimitive")))
@interface SuprsendCoreKotlinx_serialization_jsonJsonPrimitive : SuprsendCoreKotlinx_serialization_jsonJsonElement
@property (class, readonly, getter=companion) SuprsendCoreKotlinx_serialization_jsonJsonPrimitiveCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) BOOL isString __attribute__((swift_name("isString")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol SuprsendCoreKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<SuprsendCoreKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<SuprsendCoreKotlinCoroutineContextElement> _Nullable)getKey_:(id<SuprsendCoreKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key_:)")));
- (id<SuprsendCoreKotlinCoroutineContext>)minusKeyKey:(id<SuprsendCoreKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<SuprsendCoreKotlinCoroutineContext>)plusContext:(id<SuprsendCoreKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol SuprsendCoreKotlinCoroutineContextElement <SuprsendCoreKotlinCoroutineContext>
@required
@property (readonly) id<SuprsendCoreKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface SuprsendCoreKotlinAbstractCoroutineContextElement : SuprsendCoreBase <SuprsendCoreKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<SuprsendCoreKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<SuprsendCoreKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol SuprsendCoreKotlinContinuationInterceptor <SuprsendCoreKotlinCoroutineContextElement>
@required
- (id<SuprsendCoreKotlinContinuation>)interceptContinuationContinuation:(id<SuprsendCoreKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<SuprsendCoreKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface SuprsendCoreKotlinx_coroutines_coreCoroutineDispatcher : SuprsendCoreKotlinAbstractCoroutineContextElement <SuprsendCoreKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<SuprsendCoreKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SuprsendCoreKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<SuprsendCoreKotlinCoroutineContext>)context block:(id<SuprsendCoreKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<SuprsendCoreKotlinCoroutineContext>)context block:(id<SuprsendCoreKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<SuprsendCoreKotlinContinuation>)interceptContinuationContinuation:(id<SuprsendCoreKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<SuprsendCoreKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (SuprsendCoreKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (SuprsendCoreKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(SuprsendCoreKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<SuprsendCoreKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol SuprsendCoreKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<SuprsendCoreKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol SuprsendCoreKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol SuprsendCoreKtor_client_coreHttpClientEngine <SuprsendCoreKotlinx_coroutines_coreCoroutineScope, SuprsendCoreKtor_ioCloseable>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(SuprsendCoreKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(SuprsendCoreKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(SuprsendCoreKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) SuprsendCoreKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) SuprsendCoreKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<SuprsendCoreKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end;

__attribute__((swift_name("RuntimeSqlCursor")))
@protocol SuprsendCoreRuntimeSqlCursor <SuprsendCoreRuntimeCloseable>
@required
- (SuprsendCoreKotlinByteArray * _Nullable)getBytesIndex:(int32_t)index __attribute__((swift_name("getBytes(index:)")));
- (SuprsendCoreDouble * _Nullable)getDoubleIndex:(int32_t)index __attribute__((swift_name("getDouble(index:)")));
- (SuprsendCoreLong * _Nullable)getLongIndex:(int32_t)index __attribute__((swift_name("getLong(index:)")));
- (NSString * _Nullable)getStringIndex:(int32_t)index __attribute__((swift_name("getString(index:)")));
- (BOOL)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("RuntimeQueryListener")))
@protocol SuprsendCoreRuntimeQueryListener
@required
- (void)queryResultsChanged __attribute__((swift_name("queryResultsChanged()")));
@end;

__attribute__((swift_name("RuntimeTransacterTransaction")))
@interface SuprsendCoreRuntimeTransacterTransaction : SuprsendCoreBase <SuprsendCoreRuntimeTransactionCallbacks>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
- (void)endTransactionSuccessful:(BOOL)successful __attribute__((swift_name("endTransaction(successful:)")));
@property (readonly) SuprsendCoreRuntimeTransacterTransaction * _Nullable enclosingTransaction __attribute__((swift_name("enclosingTransaction")));
@end;

__attribute__((swift_name("RuntimeSqlPreparedStatement")))
@protocol SuprsendCoreRuntimeSqlPreparedStatement
@required
- (void)bindBytesIndex:(int32_t)index bytes:(SuprsendCoreKotlinByteArray * _Nullable)bytes __attribute__((swift_name("bindBytes(index:bytes:)")));
- (void)bindDoubleIndex:(int32_t)index double:(SuprsendCoreDouble * _Nullable)double_ __attribute__((swift_name("bindDouble(index:double:)")));
- (void)bindLongIndex:(int32_t)index long:(SuprsendCoreLong * _Nullable)long_ __attribute__((swift_name("bindLong(index:long:)")));
- (void)bindStringIndex:(int32_t)index string:(NSString * _Nullable)string __attribute__((swift_name("bindString(index:string:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol SuprsendCoreKotlinx_serialization_coreEncoder
@required
- (id<SuprsendCoreKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<SuprsendCoreKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<SuprsendCoreKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<SuprsendCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<SuprsendCoreKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<SuprsendCoreKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<SuprsendCoreKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<SuprsendCoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<SuprsendCoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) SuprsendCoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol SuprsendCoreKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<SuprsendCoreKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<SuprsendCoreKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<SuprsendCoreKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) SuprsendCoreKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol SuprsendCoreKotlinx_serialization_coreDecoder
@required
- (id<SuprsendCoreKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<SuprsendCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<SuprsendCoreKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<SuprsendCoreKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<SuprsendCoreKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (SuprsendCoreKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<SuprsendCoreKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<SuprsendCoreKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) SuprsendCoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol SuprsendCoreKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next_ __attribute__((swift_name("next_()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonPrimitive.Companion")))
@interface SuprsendCoreKotlinx_serialization_jsonJsonPrimitiveCompanion : SuprsendCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SuprsendCoreKotlinx_serialization_jsonJsonPrimitiveCompanion *shared __attribute__((swift_name("shared")));
- (id<SuprsendCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol SuprsendCoreKotlinCoroutineContextKey
@required
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol SuprsendCoreKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<SuprsendCoreKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface SuprsendCoreKotlinAbstractCoroutineContextKey<B, E> : SuprsendCoreBase <SuprsendCoreKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<SuprsendCoreKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<SuprsendCoreKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface SuprsendCoreKotlinx_coroutines_coreCoroutineDispatcherKey : SuprsendCoreKotlinAbstractCoroutineContextKey<id<SuprsendCoreKotlinContinuationInterceptor>, SuprsendCoreKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<SuprsendCoreKotlinCoroutineContextKey>)baseKey safeCast:(id<SuprsendCoreKotlinCoroutineContextElement> _Nullable (^)(id<SuprsendCoreKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SuprsendCoreKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol SuprsendCoreKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface SuprsendCoreKtor_client_coreHttpRequestData : SuprsendCoreBase
- (instancetype)initWithUrl:(SuprsendCoreKtor_httpUrl *)url method:(SuprsendCoreKtor_httpHttpMethod *)method headers:(id<SuprsendCoreKtor_httpHeaders>)headers body:(SuprsendCoreKtor_httpOutgoingContent *)body executionContext:(id<SuprsendCoreKotlinx_coroutines_coreJob>)executionContext attributes:(id<SuprsendCoreKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<SuprsendCoreKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SuprsendCoreKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) SuprsendCoreKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<SuprsendCoreKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<SuprsendCoreKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) SuprsendCoreKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) SuprsendCoreKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface SuprsendCoreKtor_client_coreHttpResponseData : SuprsendCoreBase
- (instancetype)initWithStatusCode:(SuprsendCoreKtor_httpHttpStatusCode *)statusCode requestTime:(SuprsendCoreKtor_utilsGMTDate *)requestTime headers:(id<SuprsendCoreKtor_httpHeaders>)headers version:(SuprsendCoreKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<SuprsendCoreKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<SuprsendCoreKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<SuprsendCoreKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) SuprsendCoreKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) SuprsendCoreKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) SuprsendCoreKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface SuprsendCoreKtor_client_coreHttpClient : SuprsendCoreBase <SuprsendCoreKotlinx_coroutines_coreCoroutineScope, SuprsendCoreKtor_ioCloseable>
- (instancetype)initWithEngine:(id<SuprsendCoreKtor_client_coreHttpClientEngine>)engine userConfig:(SuprsendCoreKtor_client_coreHttpClientConfig<SuprsendCoreKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (SuprsendCoreKtor_client_coreHttpClient *)configBlock:(void (^)(SuprsendCoreKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<SuprsendCoreKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SuprsendCoreKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<SuprsendCoreKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<SuprsendCoreKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) SuprsendCoreKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) SuprsendCoreKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) SuprsendCoreKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) SuprsendCoreKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) SuprsendCoreKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) SuprsendCoreKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface SuprsendCoreKtor_client_coreHttpClientEngineConfig : SuprsendCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property SuprsendCoreKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol SuprsendCoreKtor_client_coreHttpClientEngineCapability
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface SuprsendCoreKotlinByteArray : SuprsendCoreBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(SuprsendCoreByte *(^)(SuprsendCoreInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (SuprsendCoreKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol SuprsendCoreKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<SuprsendCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<SuprsendCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<SuprsendCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<SuprsendCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<SuprsendCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<SuprsendCoreKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<SuprsendCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<SuprsendCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<SuprsendCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<SuprsendCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SuprsendCoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<SuprsendCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SuprsendCoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<SuprsendCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<SuprsendCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<SuprsendCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<SuprsendCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) SuprsendCoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface SuprsendCoreKotlinx_serialization_coreSerializersModule : SuprsendCoreBase
- (void)dumpToCollector:(id<SuprsendCoreKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<SuprsendCoreKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<SuprsendCoreKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<SuprsendCoreKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<SuprsendCoreKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SuprsendCoreKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<SuprsendCoreKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SuprsendCoreKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol SuprsendCoreKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface SuprsendCoreKotlinx_serialization_coreSerialKind : SuprsendCoreBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol SuprsendCoreKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<SuprsendCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<SuprsendCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<SuprsendCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<SuprsendCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<SuprsendCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<SuprsendCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<SuprsendCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<SuprsendCoreKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<SuprsendCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<SuprsendCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<SuprsendCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<SuprsendCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SuprsendCoreKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<SuprsendCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SuprsendCoreKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<SuprsendCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<SuprsendCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<SuprsendCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) SuprsendCoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface SuprsendCoreKotlinNothing : SuprsendCoreBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface SuprsendCoreKtor_httpUrl : SuprsendCoreBase
@property (class, readonly, getter=companion) SuprsendCoreKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<SuprsendCoreKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) SuprsendCoreKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface SuprsendCoreKtor_httpHttpMethod : SuprsendCoreBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SuprsendCoreKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SuprsendCoreKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol SuprsendCoreKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<SuprsendCoreKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end;

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol SuprsendCoreKtor_httpHeaders <SuprsendCoreKtor_utilsStringValues>
@required
@end;

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface SuprsendCoreKtor_httpOutgoingContent : SuprsendCoreBase
- (id _Nullable)getPropertyKey:(SuprsendCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(SuprsendCoreKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<SuprsendCoreKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@property (readonly) SuprsendCoreLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) SuprsendCoreKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<SuprsendCoreKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol SuprsendCoreKotlinx_coroutines_coreJob <SuprsendCoreKotlinCoroutineContextElement>
@required
- (id<SuprsendCoreKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<SuprsendCoreKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(SuprsendCoreKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (SuprsendCoreKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<SuprsendCoreKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(SuprsendCoreKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<SuprsendCoreKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(SuprsendCoreKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(SuprsendCoreKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<SuprsendCoreKotlinx_coroutines_coreJob>)plusOther_:(id<SuprsendCoreKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<SuprsendCoreKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<SuprsendCoreKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end;

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol SuprsendCoreKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(SuprsendCoreKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(SuprsendCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey__:(SuprsendCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key__:)")));
- (id _Nullable)getOrNullKey:(SuprsendCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(SuprsendCoreKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(SuprsendCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(SuprsendCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(SuprsendCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<SuprsendCoreKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface SuprsendCoreKtor_httpHttpStatusCode : SuprsendCoreBase
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SuprsendCoreKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SuprsendCoreKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (SuprsendCoreKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface SuprsendCoreKtor_utilsGMTDate : SuprsendCoreBase <SuprsendCoreKotlinComparable>
@property (class, readonly, getter=companion) SuprsendCoreKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SuprsendCoreKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (SuprsendCoreKtor_utilsWeekDay *)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (int32_t)component6 __attribute__((swift_name("component6()")));
- (SuprsendCoreKtor_utilsMonth *)component7 __attribute__((swift_name("component7()")));
- (int32_t)component8 __attribute__((swift_name("component8()")));
- (int64_t)component9 __attribute__((swift_name("component9()")));
- (SuprsendCoreKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(SuprsendCoreKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(SuprsendCoreKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) SuprsendCoreKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) SuprsendCoreKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface SuprsendCoreKtor_httpHttpProtocolVersion : SuprsendCoreBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SuprsendCoreKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (SuprsendCoreKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface SuprsendCoreKtor_client_coreHttpClientConfig<T> : SuprsendCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SuprsendCoreKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(SuprsendCoreKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<SuprsendCoreKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(SuprsendCoreKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(SuprsendCoreKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface SuprsendCoreKtor_eventsEvents : SuprsendCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(SuprsendCoreKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<SuprsendCoreKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(SuprsendCoreKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(SuprsendCoreKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end;

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface SuprsendCoreKtor_utilsPipeline<TSubject, TContext> : SuprsendCoreBase
- (instancetype)initWithPhase:(SuprsendCoreKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SuprsendCoreKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(SuprsendCoreKotlinArray<SuprsendCoreKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(SuprsendCoreKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(SuprsendCoreKtor_utilsPipelinePhase *)reference phase:(SuprsendCoreKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(SuprsendCoreKtor_utilsPipelinePhase *)reference phase:(SuprsendCoreKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(SuprsendCoreKtor_utilsPipelinePhase *)phase block:(id<SuprsendCoreKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<SuprsendCoreKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(SuprsendCoreKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(SuprsendCoreKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(SuprsendCoreKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(SuprsendCoreKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
@property (readonly) id<SuprsendCoreKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly, getter=isEmpty_) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<SuprsendCoreKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface SuprsendCoreKtor_client_coreHttpReceivePipeline : SuprsendCoreKtor_utilsPipeline<SuprsendCoreKtor_client_coreHttpResponse *, SuprsendCoreKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(SuprsendCoreKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SuprsendCoreKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(SuprsendCoreKotlinArray<SuprsendCoreKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SuprsendCoreKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface SuprsendCoreKtor_client_coreHttpRequestPipeline : SuprsendCoreKtor_utilsPipeline<id, SuprsendCoreKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(SuprsendCoreKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SuprsendCoreKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(SuprsendCoreKotlinArray<SuprsendCoreKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SuprsendCoreKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface SuprsendCoreKtor_client_coreHttpResponsePipeline : SuprsendCoreKtor_utilsPipeline<SuprsendCoreKtor_client_coreHttpResponseContainer *, SuprsendCoreKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(SuprsendCoreKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SuprsendCoreKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(SuprsendCoreKotlinArray<SuprsendCoreKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SuprsendCoreKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface SuprsendCoreKtor_client_coreHttpSendPipeline : SuprsendCoreKtor_utilsPipeline<id, SuprsendCoreKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(SuprsendCoreKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SuprsendCoreKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(SuprsendCoreKotlinArray<SuprsendCoreKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SuprsendCoreKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface SuprsendCoreKtor_client_coreProxyConfig : SuprsendCoreBase
- (instancetype)initWithUrl:(SuprsendCoreKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SuprsendCoreKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface SuprsendCoreKotlinByteIterator : SuprsendCoreBase <SuprsendCoreKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SuprsendCoreByte *)next_ __attribute__((swift_name("next_()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol SuprsendCoreKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<SuprsendCoreKotlinKClass>)kClass provider:(id<SuprsendCoreKotlinx_serialization_coreKSerializer> (^)(NSArray<id<SuprsendCoreKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<SuprsendCoreKotlinKClass>)kClass serializer:(id<SuprsendCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<SuprsendCoreKotlinKClass>)baseClass actualClass:(id<SuprsendCoreKotlinKClass>)actualClass actualSerializer:(id<SuprsendCoreKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<SuprsendCoreKotlinKClass>)baseClass defaultDeserializerProvider:(id<SuprsendCoreKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<SuprsendCoreKotlinKClass>)baseClass defaultDeserializerProvider:(id<SuprsendCoreKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<SuprsendCoreKotlinKClass>)baseClass defaultSerializerProvider:(id<SuprsendCoreKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol SuprsendCoreKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol SuprsendCoreKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol SuprsendCoreKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol SuprsendCoreKotlinKClass <SuprsendCoreKotlinKDeclarationContainer, SuprsendCoreKotlinKAnnotatedElement, SuprsendCoreKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface SuprsendCoreKtor_httpUrlCompanion : SuprsendCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SuprsendCoreKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Ktor_httpParameters")))
@protocol SuprsendCoreKtor_httpParameters <SuprsendCoreKtor_utilsStringValues>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface SuprsendCoreKtor_httpURLProtocol : SuprsendCoreBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SuprsendCoreKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (SuprsendCoreKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface SuprsendCoreKtor_httpHttpMethodCompanion : SuprsendCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SuprsendCoreKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (SuprsendCoreKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<SuprsendCoreKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) SuprsendCoreKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) SuprsendCoreKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) SuprsendCoreKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) SuprsendCoreKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) SuprsendCoreKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) SuprsendCoreKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) SuprsendCoreKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end;

__attribute__((swift_name("KotlinMapEntry")))
@protocol SuprsendCoreKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface SuprsendCoreKtor_utilsAttributeKey<T> : SuprsendCoreBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface SuprsendCoreKtor_httpHeaderValueWithParameters : SuprsendCoreBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<SuprsendCoreKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SuprsendCoreKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<SuprsendCoreKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface SuprsendCoreKtor_httpContentType : SuprsendCoreKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<SuprsendCoreKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<SuprsendCoreKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SuprsendCoreKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(SuprsendCoreKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (SuprsendCoreKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (SuprsendCoreKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol SuprsendCoreKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol SuprsendCoreKotlinx_coroutines_coreChildHandle <SuprsendCoreKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(SuprsendCoreKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<SuprsendCoreKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol SuprsendCoreKotlinx_coroutines_coreChildJob <SuprsendCoreKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<SuprsendCoreKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end;

__attribute__((swift_name("KotlinSequence")))
@protocol SuprsendCoreKotlinSequence
@required
- (id<SuprsendCoreKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol SuprsendCoreKotlinx_coroutines_coreSelectClause0
@required
- (void)registerSelectClause0Select:(id<SuprsendCoreKotlinx_coroutines_coreSelectInstance>)select block:(id<SuprsendCoreKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface SuprsendCoreKtor_httpHttpStatusCodeCompanion : SuprsendCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SuprsendCoreKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (SuprsendCoreKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<SuprsendCoreKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface SuprsendCoreKtor_utilsGMTDateCompanion : SuprsendCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SuprsendCoreKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SuprsendCoreKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface SuprsendCoreKtor_utilsWeekDay : SuprsendCoreKotlinEnum<SuprsendCoreKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SuprsendCoreKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SuprsendCoreKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) SuprsendCoreKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) SuprsendCoreKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) SuprsendCoreKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) SuprsendCoreKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) SuprsendCoreKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) SuprsendCoreKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (SuprsendCoreKotlinArray<SuprsendCoreKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface SuprsendCoreKtor_utilsMonth : SuprsendCoreKotlinEnum<SuprsendCoreKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SuprsendCoreKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SuprsendCoreKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) SuprsendCoreKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) SuprsendCoreKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) SuprsendCoreKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) SuprsendCoreKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) SuprsendCoreKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) SuprsendCoreKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) SuprsendCoreKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) SuprsendCoreKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) SuprsendCoreKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) SuprsendCoreKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) SuprsendCoreKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (SuprsendCoreKotlinArray<SuprsendCoreKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface SuprsendCoreKtor_httpHttpProtocolVersionCompanion : SuprsendCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SuprsendCoreKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (SuprsendCoreKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (SuprsendCoreKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) SuprsendCoreKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) SuprsendCoreKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) SuprsendCoreKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) SuprsendCoreKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) SuprsendCoreKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol SuprsendCoreKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(SuprsendCoreKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) SuprsendCoreKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface SuprsendCoreKtor_eventsEventDefinition<T> : SuprsendCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface SuprsendCoreKtor_utilsPipelinePhase : SuprsendCoreBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinFunction")))
@protocol SuprsendCoreKotlinFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol SuprsendCoreKotlinSuspendFunction2 <SuprsendCoreKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface SuprsendCoreKtor_client_coreHttpReceivePipelinePhases : SuprsendCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SuprsendCoreKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) SuprsendCoreKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) SuprsendCoreKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) SuprsendCoreKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end;

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol SuprsendCoreKtor_httpHttpMessage
@required
@property (readonly) id<SuprsendCoreKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface SuprsendCoreKtor_client_coreHttpResponse : SuprsendCoreBase <SuprsendCoreKtor_httpHttpMessage, SuprsendCoreKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SuprsendCoreKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<SuprsendCoreKtor_ioByteReadChannel> content __attribute__((swift_name("content")));
@property (readonly) SuprsendCoreKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) SuprsendCoreKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) SuprsendCoreKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) SuprsendCoreKtor_httpHttpProtocolVersion *version_ __attribute__((swift_name("version_")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface SuprsendCoreKtor_client_coreHttpRequestPipelinePhases : SuprsendCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SuprsendCoreKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) SuprsendCoreKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) SuprsendCoreKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) SuprsendCoreKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) SuprsendCoreKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) SuprsendCoreKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end;

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol SuprsendCoreKtor_httpHttpMessageBuilder
@required
@property (readonly) SuprsendCoreKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface SuprsendCoreKtor_client_coreHttpRequestBuilder : SuprsendCoreBase <SuprsendCoreKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SuprsendCoreKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (SuprsendCoreKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<SuprsendCoreKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<SuprsendCoreKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<SuprsendCoreKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (SuprsendCoreKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(SuprsendCoreKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (SuprsendCoreKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(SuprsendCoreKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(SuprsendCoreKtor_httpURLBuilder *, SuprsendCoreKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<SuprsendCoreKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property SuprsendCoreKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<SuprsendCoreKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) SuprsendCoreKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property SuprsendCoreKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) SuprsendCoreKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface SuprsendCoreKtor_client_coreHttpResponsePipelinePhases : SuprsendCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SuprsendCoreKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) SuprsendCoreKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) SuprsendCoreKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) SuprsendCoreKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) SuprsendCoreKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) SuprsendCoreKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface SuprsendCoreKtor_client_coreHttpResponseContainer : SuprsendCoreBase
- (instancetype)initWithExpectedType:(SuprsendCoreKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (SuprsendCoreKtor_utilsTypeInfo *)component1 __attribute__((swift_name("component1()")));
- (id)component2 __attribute__((swift_name("component2()")));
- (SuprsendCoreKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(SuprsendCoreKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SuprsendCoreKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface SuprsendCoreKtor_client_coreHttpClientCall : SuprsendCoreBase <SuprsendCoreKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithClient:(SuprsendCoreKtor_client_coreHttpClient *)client requestData:(SuprsendCoreKtor_client_coreHttpRequestData *)requestData responseData:(SuprsendCoreKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(SuprsendCoreKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SuprsendCoreKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(SuprsendCoreKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<SuprsendCoreKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<SuprsendCoreKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) SuprsendCoreKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<SuprsendCoreKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<SuprsendCoreKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property SuprsendCoreKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface SuprsendCoreKtor_client_coreHttpSendPipelinePhases : SuprsendCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SuprsendCoreKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) SuprsendCoreKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) SuprsendCoreKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) SuprsendCoreKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) SuprsendCoreKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) SuprsendCoreKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface SuprsendCoreKtor_httpURLProtocolCompanion : SuprsendCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SuprsendCoreKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (SuprsendCoreKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) SuprsendCoreKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) SuprsendCoreKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) SuprsendCoreKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) SuprsendCoreKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) SuprsendCoreKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, SuprsendCoreKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface SuprsendCoreKtor_httpHeaderValueParam : SuprsendCoreBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SuprsendCoreKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value __attribute__((swift_name("doCopy(name:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface SuprsendCoreKtor_httpHeaderValueWithParametersCompanion : SuprsendCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SuprsendCoreKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<SuprsendCoreKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface SuprsendCoreKtor_httpContentTypeCompanion : SuprsendCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SuprsendCoreKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (SuprsendCoreKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) SuprsendCoreKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol SuprsendCoreKotlinx_coroutines_coreParentJob <SuprsendCoreKotlinx_coroutines_coreJob>
@required
- (SuprsendCoreKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol SuprsendCoreKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnSelectHandle:(id<SuprsendCoreKotlinx_coroutines_coreDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicTrySelectDesc:(SuprsendCoreKotlinx_coroutines_coreAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectWithExceptionException:(SuprsendCoreKotlinThrowable *)exception __attribute__((swift_name("resumeSelectWithException(exception:)")));
- (BOOL)trySelect __attribute__((swift_name("trySelect()")));
- (id _Nullable)trySelectOtherOtherOp:(SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp * _Nullable)otherOp __attribute__((swift_name("trySelectOther(otherOp:)")));
@property (readonly) id<SuprsendCoreKotlinContinuation> completion __attribute__((swift_name("completion")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@end;

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol SuprsendCoreKotlinSuspendFunction0 <SuprsendCoreKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface SuprsendCoreKtor_utilsWeekDayCompanion : SuprsendCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SuprsendCoreKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (SuprsendCoreKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (SuprsendCoreKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface SuprsendCoreKtor_utilsMonthCompanion : SuprsendCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SuprsendCoreKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (SuprsendCoreKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (SuprsendCoreKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end;

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol SuprsendCoreKtor_ioByteReadChannel
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentWithCompletionHandler:(void (^)(SuprsendCoreKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(completionHandler:)")));
- (BOOL)cancelCause_:(SuprsendCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)discardMax:(int64_t)max completionHandler:(void (^)(SuprsendCoreLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discard(max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekToDestination:(SuprsendCoreKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max completionHandler:(void (^)(SuprsendCoreLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(SuprsendCoreKtor_ioChunkBuffer *)dst completionHandler:(void (^)(SuprsendCoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(SuprsendCoreKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(SuprsendCoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler:)")));
- (int32_t)readAvailableMin:(int32_t)min block:(void (^)(SuprsendCoreKtor_ioBuffer *))block __attribute__((swift_name("readAvailable(min:block:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(SuprsendCoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(SuprsendCoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBooleanWithCompletionHandler:(void (^)(SuprsendCoreBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBoolean(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readByteWithCompletionHandler:(void (^)(SuprsendCoreByte * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readByte(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readDoubleWithCompletionHandler:(void (^)(SuprsendCoreDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDouble(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFloatWithCompletionHandler:(void (^)(SuprsendCoreFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFloat(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(SuprsendCoreKtor_ioChunkBuffer *)dst n:(int32_t)n completionHandler:(void (^)(SuprsendCoreKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:n:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(SuprsendCoreKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(SuprsendCoreKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(SuprsendCoreKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(SuprsendCoreKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readIntWithCompletionHandler:(void (^)(SuprsendCoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readInt(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readLongWithCompletionHandler:(void (^)(SuprsendCoreLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readLong(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPacketSize:(int32_t)size completionHandler:(void (^)(SuprsendCoreKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPacket(size:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRemainingLimit:(int64_t)limit completionHandler:(void (^)(SuprsendCoreKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readRemaining(limit:completionHandler:)")));
- (void)readSessionConsumer:(void (^)(id<SuprsendCoreKtor_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readShortWithCompletionHandler:(void (^)(SuprsendCoreShort * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readShort(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSuspendableSessionConsumer:(id<SuprsendCoreKotlinSuspendFunction1>)consumer completionHandler:(void (^)(SuprsendCoreKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readSuspendableSession(consumer:completionHandler:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineLimit:(int32_t)limit completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8Line(limit:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineToOut:(id<SuprsendCoreKotlinAppendable>)out limit:(int32_t)limit completionHandler:(void (^)(SuprsendCoreBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8LineTo(out:limit:completionHandler:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@property (readonly) SuprsendCoreKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property (readonly) int64_t totalBytesRead __attribute__((swift_name("totalBytesRead")));
@end;

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol SuprsendCoreKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<SuprsendCoreKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<SuprsendCoreKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<SuprsendCoreKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<SuprsendCoreKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end;

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface SuprsendCoreKtor_utilsStringValuesBuilderImpl : SuprsendCoreBase <SuprsendCoreKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<SuprsendCoreKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<SuprsendCoreKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<SuprsendCoreKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<SuprsendCoreKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@property (readonly) SuprsendCoreMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface SuprsendCoreKtor_httpHeadersBuilder : SuprsendCoreKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<SuprsendCoreKtor_httpHeaders>)build __attribute__((swift_name("build()")));
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface SuprsendCoreKtor_client_coreHttpRequestBuilderCompanion : SuprsendCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SuprsendCoreKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface SuprsendCoreKtor_httpURLBuilder : SuprsendCoreBase
- (instancetype)initWithProtocol:(SuprsendCoreKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<SuprsendCoreKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SuprsendCoreKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (SuprsendCoreKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<SuprsendCoreKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<SuprsendCoreKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property SuprsendCoreKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface SuprsendCoreKtor_utilsTypeInfo : SuprsendCoreBase
- (instancetype)initWithType:(id<SuprsendCoreKotlinKClass>)type reifiedType:(id<SuprsendCoreKotlinKType>)reifiedType kotlinType:(id<SuprsendCoreKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (id<SuprsendCoreKotlinKClass>)component1 __attribute__((swift_name("component1()")));
- (id<SuprsendCoreKotlinKType>)component2 __attribute__((swift_name("component2()")));
- (id<SuprsendCoreKotlinKType> _Nullable)component3 __attribute__((swift_name("component3()")));
- (SuprsendCoreKtor_utilsTypeInfo *)doCopyType:(id<SuprsendCoreKotlinKClass>)type reifiedType:(id<SuprsendCoreKotlinKType>)reifiedType kotlinType:(id<SuprsendCoreKotlinKType> _Nullable)kotlinType __attribute__((swift_name("doCopy(type:reifiedType:kotlinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SuprsendCoreKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<SuprsendCoreKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<SuprsendCoreKotlinKClass> type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface SuprsendCoreKtor_client_coreHttpClientCallCompanion : SuprsendCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SuprsendCoreKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SuprsendCoreKtor_utilsAttributeKey<id> *CustomResponse __attribute__((swift_name("CustomResponse"))) __attribute__((unavailable("This is going to be removed. Please file a ticket with clarification why and what for do you need it.")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol SuprsendCoreKtor_client_coreHttpRequest <SuprsendCoreKtor_httpHttpMessage, SuprsendCoreKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<SuprsendCoreKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) SuprsendCoreKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) SuprsendCoreKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) SuprsendCoreKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) SuprsendCoreKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicDesc")))
@interface SuprsendCoreKotlinx_coroutines_coreAtomicDesc : SuprsendCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(SuprsendCoreKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(SuprsendCoreKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
@property SuprsendCoreKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreOpDescriptor")))
@interface SuprsendCoreKotlinx_coroutines_coreOpDescriptor : SuprsendCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEarlierThanThat:(SuprsendCoreKotlinx_coroutines_coreOpDescriptor *)that __attribute__((swift_name("isEarlierThan(that:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SuprsendCoreKotlinx_coroutines_coreAtomicOp<id> * _Nullable atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.PrepareOp")))
@interface SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp : SuprsendCoreKotlinx_coroutines_coreOpDescriptor
- (instancetype)initWithAffected:(SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next desc:(SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *)desc __attribute__((swift_name("init(affected:next:desc:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishPrepare __attribute__((swift_name("finishPrepare()")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode *affected __attribute__((swift_name("affected")));
@property (readonly) SuprsendCoreKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *desc __attribute__((swift_name("desc")));
@property (readonly) SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode *next __attribute__((swift_name("next")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory")))
@interface SuprsendCoreKtor_ioMemory : SuprsendCoreBase
- (instancetype)initWithPointer:(void *)pointer size:(int64_t)size __attribute__((swift_name("init(pointer:size:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SuprsendCoreKtor_ioMemoryCompanion *companion __attribute__((swift_name("companion")));
- (void)doCopyToDestination:(SuprsendCoreKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset:)")));
- (void)doCopyToDestination:(SuprsendCoreKtor_ioMemory *)destination offset:(int64_t)offset length:(int64_t)length destinationOffset_:(int64_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset_:)")));
- (int8_t)loadAtIndex:(int32_t)index __attribute__((swift_name("loadAt(index:)")));
- (int8_t)loadAtIndex_:(int64_t)index __attribute__((swift_name("loadAt(index_:)")));
- (SuprsendCoreKtor_ioMemory *)sliceOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("slice(offset:length:)")));
- (SuprsendCoreKtor_ioMemory *)sliceOffset:(int64_t)offset length_:(int64_t)length __attribute__((swift_name("slice(offset:length_:)")));
- (void)storeAtIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("storeAt(index:value:)")));
- (void)storeAtIndex:(int64_t)index value_:(int8_t)value __attribute__((swift_name("storeAt(index:value_:)")));
@property (readonly) void *pointer __attribute__((swift_name("pointer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) int32_t size32 __attribute__((swift_name("size32")));
@end;

__attribute__((swift_name("Ktor_ioBuffer")))
@interface SuprsendCoreKtor_ioBuffer : SuprsendCoreBase
- (instancetype)initWithMemory:(SuprsendCoreKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SuprsendCoreKtor_ioBufferCompanion *companion __attribute__((swift_name("companion")));
- (void)commitWrittenCount:(int32_t)count __attribute__((swift_name("commitWritten(count:)")));
- (void)discardExactCount:(int32_t)count __attribute__((swift_name("discardExact(count:)")));
- (SuprsendCoreKtor_ioBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)duplicateToCopy:(SuprsendCoreKtor_ioBuffer *)copy __attribute__((swift_name("duplicateTo(copy:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (void)reserveEndGapEndGap:(int32_t)endGap __attribute__((swift_name("reserveEndGap(endGap:)")));
- (void)reserveStartGapStartGap:(int32_t)startGap __attribute__((swift_name("reserveStartGap(startGap:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetForRead __attribute__((swift_name("resetForRead()")));
- (void)resetForWrite __attribute__((swift_name("resetForWrite()")));
- (void)resetForWriteLimit:(int32_t)limit __attribute__((swift_name("resetForWrite(limit:)")));
- (void)rewindCount:(int32_t)count __attribute__((swift_name("rewind(count:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeekByte __attribute__((swift_name("tryPeekByte()")));
- (int32_t)tryReadByte __attribute__((swift_name("tryReadByte()")));
- (void)writeByteValue:(int8_t)value __attribute__((swift_name("writeByte(value:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@property (readonly) int32_t endGap __attribute__((swift_name("endGap")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) SuprsendCoreKtor_ioMemory *memory __attribute__((swift_name("memory")));
@property (readonly) int32_t readPosition __attribute__((swift_name("readPosition")));
@property (readonly) int32_t readRemaining __attribute__((swift_name("readRemaining")));
@property (readonly) int32_t startGap __attribute__((swift_name("startGap")));
@property (readonly) int32_t writePosition __attribute__((swift_name("writePosition")));
@property (readonly) int32_t writeRemaining __attribute__((swift_name("writeRemaining")));
@end;

__attribute__((swift_name("Ktor_ioChunkBuffer")))
@interface SuprsendCoreKtor_ioChunkBuffer : SuprsendCoreKtor_ioBuffer
- (instancetype)initWithMemory:(SuprsendCoreKtor_ioMemory *)memory origin:(SuprsendCoreKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<SuprsendCoreKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMemory:(SuprsendCoreKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SuprsendCoreKtor_ioChunkBufferCompanion *companion __attribute__((swift_name("companion")));
- (SuprsendCoreKtor_ioChunkBuffer * _Nullable)cleanNext __attribute__((swift_name("cleanNext()")));
- (SuprsendCoreKtor_ioChunkBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)releasePool:(id<SuprsendCoreKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property (getter=next__) SuprsendCoreKtor_ioChunkBuffer * _Nullable next __attribute__((swift_name("next")));
@property (readonly) SuprsendCoreKtor_ioChunkBuffer * _Nullable origin __attribute__((swift_name("origin")));
@property (readonly) int32_t referenceCount __attribute__((swift_name("referenceCount")));
@end;

__attribute__((swift_name("Ktor_ioInput")))
@interface SuprsendCoreKtor_ioInput : SuprsendCoreBase <SuprsendCoreKtor_ioCloseable>
- (instancetype)initWithHead:(SuprsendCoreKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<SuprsendCoreKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SuprsendCoreKtor_ioInputCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (void)close __attribute__((swift_name("close()")));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (int64_t)discardN_:(int64_t)n __attribute__((swift_name("discard(n_:)")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));
- (SuprsendCoreKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(SuprsendCoreKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (BOOL)hasBytesN:(int32_t)n __attribute__((swift_name("hasBytes(n:)")));
- (void)markNoMoreChunksAvailable __attribute__((swift_name("markNoMoreChunksAvailable()")));
- (int64_t)peekToDestination:(SuprsendCoreKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int32_t)peekToBuffer:(SuprsendCoreKtor_ioChunkBuffer *)buffer __attribute__((swift_name("peekTo(buffer:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (NSString *)readTextMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(min:max:)")));
- (int32_t)readTextOut:(id<SuprsendCoreKotlinAppendable>)out min:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(out:min:max:)")));
- (NSString *)readTextExactExactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(exactCharacters:)")));
- (void)readTextExactOut:(id<SuprsendCoreKotlinAppendable>)out exactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(out:exactCharacters:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@property (readonly) id<SuprsendCoreKtor_ioObjectPool> pool __attribute__((swift_name("pool")));
@property (readonly) int64_t remaining __attribute__((swift_name("remaining")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket")))
@interface SuprsendCoreKtor_ioByteReadPacket : SuprsendCoreKtor_ioInput
- (instancetype)initWithHead:(SuprsendCoreKtor_ioChunkBuffer *)head pool:(id<SuprsendCoreKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:pool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHead:(SuprsendCoreKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<SuprsendCoreKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SuprsendCoreKtor_ioByteReadPacketCompanion *companion __attribute__((swift_name("companion")));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (SuprsendCoreKtor_ioByteReadPacket *)doCopy __attribute__((swift_name("doCopy()")));
- (SuprsendCoreKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(SuprsendCoreKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Ktor_ioReadSession")))
@protocol SuprsendCoreKtor_ioReadSession
@required
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (SuprsendCoreKtor_ioChunkBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@end;

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol SuprsendCoreKotlinSuspendFunction1 <SuprsendCoreKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end;

__attribute__((swift_name("KotlinAppendable")))
@protocol SuprsendCoreKotlinAppendable
@required
- (id<SuprsendCoreKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<SuprsendCoreKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<SuprsendCoreKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface SuprsendCoreKtor_httpURLBuilderCompanion : SuprsendCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SuprsendCoreKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol SuprsendCoreKtor_httpParametersBuilder <SuprsendCoreKtor_utilsStringValuesBuilder>
@required
@end;

__attribute__((swift_name("KotlinKType")))
@protocol SuprsendCoreKotlinKType
@required
@property (readonly) NSArray<SuprsendCoreKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));
@property (readonly) id<SuprsendCoreKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicOp")))
@interface SuprsendCoreKotlinx_coroutines_coreAtomicOp<__contravariant T> : SuprsendCoreKotlinx_coroutines_coreOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(T _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)decideDecision:(id _Nullable)decision __attribute__((swift_name("decide(decision:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (id _Nullable)prepareAffected:(T _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
@property (readonly) SuprsendCoreKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) id _Nullable consensus __attribute__((swift_name("consensus")));
@property (readonly) BOOL isDecided __attribute__((swift_name("isDecided")));
@property (readonly) int64_t opSequence __attribute__((swift_name("opSequence")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode")))
@interface SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode : SuprsendCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node condition:(SuprsendCoreBoolean *(^)(void))condition __attribute__((swift_name("addLastIf(node:condition:)")));
- (BOOL)addLastIfPrevNode:(SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(SuprsendCoreBoolean *(^)(SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate __attribute__((swift_name("addLastIfPrev(node:predicate:)")));
- (BOOL)addLastIfPrevAndIfNode:(SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(SuprsendCoreBoolean *(^)(SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate condition:(SuprsendCoreBoolean *(^)(void))condition __attribute__((swift_name("addLastIfPrevAndIf(node:predicate:condition:)")));
- (BOOL)addOneIfEmptyNode:(SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addOneIfEmpty(node:)")));
- (SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeAddLastNode:(SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("describeAddLast(node:)")));
- (SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeRemoveFirst __attribute__((swift_name("describeRemoveFirst()")));
- (void)helpRemove __attribute__((swift_name("helpRemove()")));
- (SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)nextIfRemoved __attribute__((swift_name("nextIfRemoved()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
- (id _Nullable)removeFirstIfIsInstanceOfOrPeekIfPredicate:(SuprsendCoreBoolean *(^)(id _Nullable))predicate __attribute__((swift_name("removeFirstIfIsInstanceOfOrPeekIf(predicate:)")));
- (SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@property (readonly, getter=next__) id next __attribute__((swift_name("next")));
@property (readonly) SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode *nextNode __attribute__((swift_name("nextNode")));
@property (readonly) SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode *prevNode __attribute__((swift_name("prevNode")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.AbstractAtomicDesc")))
@interface SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc : SuprsendCoreKotlinx_coroutines_coreAtomicDesc
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(SuprsendCoreKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)failureAffected:(SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (id _Nullable)onPreparePrepareOp:(SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("onPrepare(prepareOp:)")));
- (void)onRemovedAffected:(SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("onRemoved(affected:)")));
- (id _Nullable)prepareOp:(SuprsendCoreKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
- (BOOL)retryAffected:(SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(SuprsendCoreKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory.Companion")))
@interface SuprsendCoreKtor_ioMemoryCompanion : SuprsendCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SuprsendCoreKtor_ioMemoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SuprsendCoreKtor_ioMemory *Empty __attribute__((swift_name("Empty")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioBuffer.Companion")))
@interface SuprsendCoreKtor_ioBufferCompanion : SuprsendCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SuprsendCoreKtor_ioBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SuprsendCoreKtor_ioBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end;

__attribute__((swift_name("Ktor_ioObjectPool")))
@protocol SuprsendCoreKtor_ioObjectPool <SuprsendCoreKtor_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioChunkBuffer.Companion")))
@interface SuprsendCoreKtor_ioChunkBufferCompanion : SuprsendCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SuprsendCoreKtor_ioChunkBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SuprsendCoreKtor_ioChunkBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<SuprsendCoreKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<SuprsendCoreKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioInput.Companion")))
@interface SuprsendCoreKtor_ioInputCompanion : SuprsendCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SuprsendCoreKtor_ioInputCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket.Companion")))
@interface SuprsendCoreKtor_ioByteReadPacketCompanion : SuprsendCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SuprsendCoreKtor_ioByteReadPacketCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SuprsendCoreKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface SuprsendCoreKotlinKTypeProjection : SuprsendCoreBase
- (instancetype)initWithVariance:(SuprsendCoreKotlinKVariance * _Nullable)variance type:(id<SuprsendCoreKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SuprsendCoreKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (SuprsendCoreKotlinKVariance * _Nullable)component1 __attribute__((swift_name("component1()")));
- (id<SuprsendCoreKotlinKType> _Nullable)component2 __attribute__((swift_name("component2()")));
- (SuprsendCoreKotlinKTypeProjection *)doCopyVariance:(SuprsendCoreKotlinKVariance * _Nullable)variance type:(id<SuprsendCoreKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SuprsendCoreKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) SuprsendCoreKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc")))
@interface SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T> : SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)queue node:(T)node __attribute__((swift_name("init(queue:node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishOnSuccessAffected:(SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(SuprsendCoreKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) T node __attribute__((swift_name("node")));
@property (readonly) SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode *originalNext __attribute__((swift_name("originalNext")));
@property (readonly) SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc")))
@interface SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T> : SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)queue __attribute__((swift_name("init(queue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (id _Nullable)failureAffected:(SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(SuprsendCoreKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@property (readonly) SuprsendCoreKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@property (readonly) T _Nullable result __attribute__((swift_name("result")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface SuprsendCoreKotlinKVariance : SuprsendCoreKotlinEnum<SuprsendCoreKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SuprsendCoreKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) SuprsendCoreKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) SuprsendCoreKotlinKVariance *out __attribute__((swift_name("out")));
+ (SuprsendCoreKotlinArray<SuprsendCoreKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface SuprsendCoreKotlinKTypeProjectionCompanion : SuprsendCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SuprsendCoreKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));
- (SuprsendCoreKotlinKTypeProjection *)contravariantType:(id<SuprsendCoreKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));
- (SuprsendCoreKotlinKTypeProjection *)covariantType:(id<SuprsendCoreKotlinKType>)type __attribute__((swift_name("covariant(type:)")));
- (SuprsendCoreKotlinKTypeProjection *)invariantType:(id<SuprsendCoreKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) SuprsendCoreKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
