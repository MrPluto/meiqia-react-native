
#if __has_include("RCTBridgeModule.h")
#import "RCTBridgeModule.h"
#else
#import <React/RCTBridgeModule.h>
#endif

@interface RNMeiqia : NSObject <RCTBridgeModule>

@property NSString* deviceTokenStr;

@end
