/* Generated by RuntimeBrowser.
 */

@protocol IKJSXMLHTTPRequest <IKJSEventListenerObject, JSExport>

@required

- (void)abort;
- (NSString *)getAllResponseHeaders;
- (NSString *)getResponseHeader:(NSString *)arg1;
- (id)init;
- (NSDictionary *)metrics;
- (void)open:(NSString *)arg1 :(NSString *)arg2 :(NSNumber *)arg3 :(JSValue *)arg4 :(JSValue *)arg5;
- (unsigned int)readyState;
- (id)response;
- (NSString *)responseText;
- (NSString *)responseType;
- (IKDOMDocument *)responseXML;
- (void)send:(JSValue *)arg1;
- (void)setRequestHeader:(NSString *)arg1 :(NSString *)arg2;
- (void)setResponseType:(NSString *)arg1;
- (void)setTimeout:(unsigned long)arg1;
- (unsigned int)status;
- (NSString *)statusText;
- (unsigned long)timeout;

@end
