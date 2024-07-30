#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LGUncaughtExceptionHandle : NSObject

@property (nonatomic) BOOL dismissed;

+ (void)installUncaughtSignalExceptionHandler;

@end

NS_ASSUME_NONNULL_END

