#import <Cocoa/Cocoa.h>
#import "JSCocoa.h"

@class JSCocoa;
@class WebView;

struct JSGlobalContextRef;

@interface AtomController : NSWindowController <NSWindowDelegate>

@property (assign) WebView *webView;
@property (nonatomic, retain, readonly) NSString *url;
@property (nonatomic, retain, readonly) NSString *bootstrapScript;

- (id)initForSpecs;
- (id)initWithURL:(NSString *)url;

- (void)triggerAtomEventWithName:(NSString *)name data:(id)data;
- (void)reload;
- (JSValueRefAndContextRef)jsWindow;
- (void)performActionForMenuItemPath:(NSString *)menuItemPath;

@end
