#ifndef const_h
#define const_h

#define SDK_VERSION @"1.0.2"

#define API_URL @"https://mobile-ws.pushapps.mobi/v1/%@"
//#define API_URL @"http://dev.mobile-ws.pushapps.mobi/v1/%@"

#define API_EP_REGISTER          @"devices/register"
#define API_EP_SETTOKEN          @"devices/token"
#define API_EP_REPORTCLICKS      @"clicks"
#define API_EP_WIDGETFEED        @"features/get"
#define API_EP_TESTNOTIFICATION  @"notifications/{notification_id}/test"
#define API_EP_ADDTAGS           @"tags"
#define API_EP_DELETETAGS        @"tags"
#define API_EP_GETTAGS           @"devices/tags?device_id={device_id}&ad_id={ad_id}"

#endif /* const_h */