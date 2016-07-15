#
#  Be sure to run `pod spec lint PushApps.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see http://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|
  s.name         = "PushApps"
  s.version      = "1.0.3"
  s.summary      = "PushApps - the first Push Notification Enrichment Platform"
  s.description  = "PushApps SDK enables you to send enriched push notifications via the PushApps platform."
  s.homepage     = "https://www.pushapps.mobi"
  s.license      = "MIT"
  s.author       = { "PushApps" => "support@pushapps.mobi" }
  s.source       = { :git => "https://github.com/PushAppsPlatform/pushapps-ios-sdk.git", :tag => "1.0.3" }
  s.platforms    = { "ios" => "8.0" }
  s.requires_arc = true
  s.vendored_frameworks = "Framework/PushApps.framework"
end
