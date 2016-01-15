#import "MKNetworkEngineRTC.h"

@interface tyrtchttpengine : MKNetworkEngineRTC

typedef void (^GetTokenOkBlock)(BOOL ok,NSDictionary* dic);
typedef void (^GetAddressesOkBlock)(BOOL ok,NSDictionary* dic);
typedef void (^RespOkBlock)(BOOL ok,NSDictionary* dic);

-(MKNetworkOperationRTC*) getServerAddresses:(NSString*)httpMethod
                                   useSSL:(BOOL)useSSL
                                    appId:(NSString*)appId
                                   appKey:(NSString*)appKey
                        completionHandler:(RespOkBlock) completionBlock
                             errorHandler:(MKNKErrorBlock) errorBlock;

-(MKNetworkOperationRTC*) getAccountToken:(NSString*)httpMethod
                                useSSL:(BOOL)useSSL
                                 appId:(NSString*)appId
                                appKey:(NSString*)appKey
                                 accId:(NSString*)accId
                              authType:(int)authType
                          terminalType:(NSString*)terminalType
                            terminalSN:(NSString*)terminalSN
                              grantStr:(NSString*)grantStr
                           callbackURL:(NSString*)callbackURL
                     completionHandler:(RespOkBlock) completionBlock
                          errorHandler:(MKNKErrorBlock) errorBlockr;

-(MKNetworkOperationRTC*) getUserStatus:(NSString*)httpMethod
                              useSSL:(BOOL)useSSL
                               appId:(NSString*)appId
                              appKey:(NSString*)appKey
                              accIds:(NSString*)accIds
                        authTypeFlag:(int)authTypeFlag
                               token:(NSString*)token
                   completionHandler:(RespOkBlock) completionBlock
                        errorHandler:(MKNKErrorBlock) errorBlock;

-(MKNetworkOperationRTC*) GroupCall:(NSString*)httpMethod
                          useSSL:(BOOL)useSSL
                           appId:(NSString*)appId
                          appKey:(NSString*)appKey
                         creater:(NSString*)gvcCreater
                     createrType:(NSString*)gvcCreaterType
                            type:(int)gvcType
                            name:(NSString*)gvcName
                          maxMem:(int)gvcMaxmem
                     inviteeList:(NSMutableArray*)gvcinviteeList
                          attend:(int)gvcAttend
                        password:(NSString*)gvcPassword
                           cbUrl:(NSString*)gvcCBurl
                        cvMethod:(NSString*)gvcCBmethod
                       switchPic:(int)switchPicture
                           codec:(int)codec
                     screenSplit:(int)screen
                              lv:(int)lv
                        initMode:(int)initMode
                           token:(NSString*)token
               completionHandler:(RespOkBlock) completionBlock
                    errorHandler:(MKNKErrorBlock) errorBlock;

-(MKNetworkOperationRTC*) getGroupMemeberList:(NSString*)httpMethod
                                    useSSL:(BOOL)useSSL
                                     appId:(NSString*)appId
                                    appKey:(NSString*)appKey
                                   creater:(NSString*)gvcCreater
                               createrType:(NSString*)gvcCreaterType
                                    callID:(NSString*)callID
                                     token:(NSString*)token
                         completionHandler:(RespOkBlock) completionBlock
                              errorHandler:(MKNKErrorBlock) errorBlock;

-(MKNetworkOperationRTC*) InvitedMembermanagement:(NSString*)httpMethod
                                        useSSL:(BOOL)useSSL
                                         appId:(NSString*)appId
                                        appKey:(NSString*)appKey
                                       creater:(NSString*)gvcCreater
                                   createrType:(NSString*)gvcCreaterType
                                        callID:(NSString*)callID
                                   inviteeList:(NSMutableArray*)inviteeList
                                          mode:(int)mode
                                         token:(NSString*)token
                             completionHandler:(RespOkBlock) completionBlock
                                  errorHandler:(MKNKErrorBlock) errorBlock;

-(MKNetworkOperationRTC*) JoinedMembermanagement:(NSString*)httpMethod
                                       useSSL:(BOOL)useSSL
                                        appId:(NSString*)appId
                                       appKey:(NSString*)appKey
                                      creater:(NSString*)gvcCreater
                                  createrType:(NSString*)gvcCreaterType
                                       callID:(NSString*)callID
                                  inviteeList:(NSMutableArray*)inviteeList
                                         mode:(int)mode
                                     password:(NSString*)gvcPassword
                                        token:(NSString*)token
                            completionHandler:(RespOkBlock) completionBlock
                                 errorHandler:(MKNKErrorBlock) errorBlock;

-(MKNetworkOperationRTC*) KickedMemberList:(NSString*)httpMethod
                                 useSSL:(BOOL)useSSL
                                  appId:(NSString*)appId
                                 appKey:(NSString*)appKey
                                creater:(NSString*)gvcCreater
                            createrType:(NSString*)gvcCreaterType
                                 callID:(NSString*)callID
                             kickedList:(NSMutableArray*)kickedList
                         replacerMember:(NSString*)replacerMember
                                  token:(NSString*)token
                      completionHandler:(RespOkBlock) completionBlock
                           errorHandler:(MKNKErrorBlock) errorBlock;

-(MKNetworkOperationRTC*) CloseGroupCall:(NSString*)httpMethod
                               useSSL:(BOOL)useSSL
                                appId:(NSString*)appId
                               appKey:(NSString*)appKey
                              creater:(NSString*)gvcCreater
                          createrType:(NSString*)gvcCreaterType
                               callID:(NSString*)callID
                                token:(NSString*)token
                    completionHandler:(RespOkBlock) completionBlock
                         errorHandler:(MKNKErrorBlock) errorBlock;

-(MKNetworkOperationRTC*) GrpvMicManagement:(NSString*)httpMethod
                                  useSSL:(BOOL)useSSL
                                   appId:(NSString*)appId
                                  appKey:(NSString*)appKey
                                 creater:(NSString*)gvcCreater
                             createrType:(NSString*)gvcCreaterType
                                  callID:(NSString*)callID
                          openrationList:(NSMutableArray*)openrationList
                                   token:(NSString*)token
                       completionHandler:(RespOkBlock) completionBlock
                            errorHandler:(MKNKErrorBlock) errorBlock;

-(MKNetworkOperationRTC*) GrpvVideoManagement:(NSString*)httpMethod
                                    useSSL:(BOOL)useSSL
                                     appId:(NSString*)appId
                                    appKey:(NSString*)appKey
                                   creater:(NSString*)gvcCreater
                               createrType:(NSString*)gvcCreaterType
                                    callID:(NSString*)callID
                               memberToSet:(NSString*)mbToSet
                            memberSetStyle:(int)mbSetStyle
                              memberToShow:(NSString*)mbToShow
                               screenSplit:(int)screen
                                        lv:(int)lv
                            openrationList:(NSMutableArray*)openrationList
                                     token:(NSString*)token
                         completionHandler:(RespOkBlock) completionBlock
                              errorHandler:(MKNKErrorBlock) errorBlock;

-(MKNetworkOperationRTC*) getGroupList:(NSString*)httpMethod
                             useSSL:(BOOL)useSSL
                              appId:(NSString*)appId
                             appKey:(NSString*)appKey
                            creater:(NSString*)gvcCreater
                        createrType:(NSString*)gvcCreaterType
                             callID:(NSString*)callID
                              token:(NSString*)token
                  completionHandler:(RespOkBlock) completionBlock
                       errorHandler:(MKNKErrorBlock) errorBlock;
@end
