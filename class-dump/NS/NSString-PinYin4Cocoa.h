//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@class RACSequence;

@interface NSString (PinYin4Cocoa)
+ (id)valueOfChar:(unsigned short)arg1;
+ (id)subscriptionHolderUserName;
+ (id)removeEmptyLine:(id)arg1 limitNumberOfLine:(unsigned long long)arg2;
+ (long long)captureCountForRegex:(id)arg1 options:(unsigned int)arg2 error:(id *)arg3;
+ (long long)captureCountForRegex:(id)arg1;
+ (void)clearStringCache;
+ (id)intToConvertBinaryString:(int)arg1;
+ (id)stringFromUInt32:(unsigned int)arg1;
+ (id)stringFromUInt64:(unsigned long long)arg1;
+ (id)rac_readContentsOfURL:(id)arg1 usedEncoding:(unsigned long long *)arg2 scheduler:(id)arg3;
+ (id)wa_md5String:(id)arg1;
+ (id)safeStringWithString:(id)arg1;
+ (BOOL)charIsLineBreak:(unsigned short)arg1;
+ (BOOL)charIsNewLine:(unsigned short)arg1;
+ (id)getStringFromUrl:(id)arg1 needle:(id)arg2;
+ (id)generatePrivacyFilePath:(id)arg1;
+ (id)generatePrivacyString:(id)arg1;
+ (id)safeStringWithUTF8String:(const char *)arg1;
+ (id)stringWithUInt64:(unsigned long long)arg1;
+ (double)baselineWithFont:(id)arg1 height:(double)arg2;
+ (id)getTextFrom:(struct XmlReaderNode_t *)arg1 atNodeName:(id)arg2;
- (BOOL)matchesPatternRegexPattern:(id)arg1;
- (BOOL)matchesPatternRegexPattern:(id)arg1 caseInsensitive:(BOOL)arg2 treatAsOneLine:(BOOL)arg3;
- (id)stringsByExtractingGroupsUsingRegexPattern:(id)arg1;
- (id)stringsByExtractingGroupsUsingRegexPattern:(id)arg1 caseInsensitive:(BOOL)arg2 treatAsOneLine:(BOOL)arg3;
- (id)stringByReplacingRegexPattern:(id)arg1 withString:(id)arg2;
- (id)stringByReplacingRegexPattern:(id)arg1 withString:(id)arg2 caseInsensitive:(BOOL)arg3 treatAsOneLine:(BOOL)arg4;
- (id)stringByReplacingRegexPattern:(id)arg1 withString:(id)arg2 caseInsensitive:(BOOL)arg3;
- (long long)indexOf:(int)arg1 fromIndex:(int)arg2;
- (long long)indexOf:(int)arg1;
- (long long)indexOfString:(id)arg1 fromIndex:(int)arg2;
- (long long)indexOfString:(id)arg1;
- (BOOL)isWeAppSessionHolderUserName;
- (BOOL)isNotificationMessageUserName;
- (BOOL)isSearchableUserName;
- (BOOL)isHiddenRawUserName;
- (BOOL)isLocalPlaceholderUsrName;
- (BOOL)isLocalSupportedPlaceholderUsrName;
- (BOOL)isStickyFolderUsrName;
- (BOOL)isLocalHardCodeUsrName;
- (BOOL)isOfficialPluginUsrName;
- (BOOL)isLocalizedPluginUsrName;
- (BOOL)isPluginUsrName;
- (BOOL)isGroupBoxUserName;
- (BOOL)isFileHelperUserName;
- (BOOL)isQQMailUserName;
- (BOOL)isTencentNewsUserName;
- (BOOL)isSubscriptionsHolderUserName;
- (BOOL)isMassSendContactUserName;
- (BOOL)isNewFriendUserName;
- (BOOL)isFBFriendUserName;
- (BOOL)isBottleContactUserName;
- (BOOL)isSXContactUserName;
- (BOOL)isGroupCardUserName;
- (BOOL)isCustomerUserName;
- (BOOL)isWxWorkChatRoom;
- (BOOL)isWxWorkUserName;
- (BOOL)isEncodeUserName;
- (unsigned int)GetChatNameType;
- (BOOL)isQQContactUserName;
- (BOOL)isLBSRoomUserName;
- (BOOL)isGroupChatUserName;
- (BOOL)teen_IsStringContainNumber;
- (unsigned long long)teen_ExtractNumber;
- (id)teen_Base64UrlDecoder;
- (id)teen_Base64UrlEncoder;
- (id)teen_URLStringByAppendingQueryString:(id)arg1;
- (id)stringByReplacingOccurrencesOfRegex:(id)arg1 options:(unsigned int)arg2 inRange:(struct _NSRange)arg3 error:(id *)arg4 enumerationOptions:(unsigned long long)arg5 usingBlock:(CDUnknownBlockType)arg6;
- (id)stringByReplacingOccurrencesOfRegex:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (BOOL)enumerateStringsSeparatedByRegex:(id)arg1 options:(unsigned int)arg2 inRange:(struct _NSRange)arg3 error:(id *)arg4 enumerationOptions:(unsigned long long)arg5 usingBlock:(CDUnknownBlockType)arg6;
- (BOOL)enumerateStringsSeparatedByRegex:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (BOOL)enumerateStringsMatchedByRegex:(id)arg1 options:(unsigned int)arg2 inRange:(struct _NSRange)arg3 error:(id *)arg4 enumerationOptions:(unsigned long long)arg5 usingBlock:(CDUnknownBlockType)arg6;
- (BOOL)enumerateStringsMatchedByRegex:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)arrayOfDictionariesByMatchingRegex:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 error:(id *)arg4 withKeys:(id *)arg5 forCaptures:(int *)arg6 count:(unsigned long long)arg7;
- (id)arrayOfDictionariesByMatchingRegex:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 error:(id *)arg4 withFirstKey:(id)arg5 arguments:(struct __va_list_tag [1])arg6;
- (id)arrayOfDictionariesByMatchingRegex:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 error:(id *)arg4 withKeysAndCaptures:(id)arg5;
- (id)arrayOfDictionariesByMatchingRegex:(id)arg1 range:(struct _NSRange)arg2 withKeysAndCaptures:(id)arg3;
- (id)arrayOfDictionariesByMatchingRegex:(id)arg1 withKeysAndCaptures:(id)arg2;
- (id)dictionaryByMatchingRegex:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 error:(id *)arg4 withKeys:(id *)arg5 forCaptures:(int *)arg6 count:(unsigned long long)arg7;
- (id)dictionaryByMatchingRegex:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 error:(id *)arg4 withFirstKey:(id)arg5 arguments:(struct __va_list_tag [1])arg6;
- (id)dictionaryByMatchingRegex:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 error:(id *)arg4 withKeysAndCaptures:(id)arg5;
- (id)dictionaryByMatchingRegex:(id)arg1 range:(struct _NSRange)arg2 withKeysAndCaptures:(id)arg3;
- (id)dictionaryByMatchingRegex:(id)arg1 withKeysAndCaptures:(id)arg2;
- (id)arrayOfCaptureComponentsMatchedByRegex:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 error:(id *)arg4;
- (id)arrayOfCaptureComponentsMatchedByRegex:(id)arg1 range:(struct _NSRange)arg2;
- (id)arrayOfCaptureComponentsMatchedByRegex:(id)arg1;
- (id)captureComponentsMatchedByRegex:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 error:(id *)arg4;
- (id)captureComponentsMatchedByRegex:(id)arg1 range:(struct _NSRange)arg2;
- (id)captureComponentsMatchedByRegex:(id)arg1;
- (id)componentsMatchedByRegex:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 capture:(long long)arg4 error:(id *)arg5;
- (id)componentsMatchedByRegex:(id)arg1 range:(struct _NSRange)arg2;
- (id)componentsMatchedByRegex:(id)arg1 capture:(long long)arg2;
- (id)componentsMatchedByRegex:(id)arg1;
- (id)stringByReplacingOccurrencesOfRegex:(id)arg1 withString:(id)arg2 options:(unsigned int)arg3 range:(struct _NSRange)arg4 error:(id *)arg5;
- (id)stringByReplacingOccurrencesOfRegex:(id)arg1 withString:(id)arg2 range:(struct _NSRange)arg3;
- (id)stringByReplacingOccurrencesOfRegex:(id)arg1 withString:(id)arg2;
- (id)stringByMatching:(id)arg1 options:(unsigned int)arg2 inRange:(struct _NSRange)arg3 capture:(long long)arg4 error:(id *)arg5;
- (id)stringByMatching:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)stringByMatching:(id)arg1 capture:(long long)arg2;
- (id)stringByMatching:(id)arg1;
- (struct _NSRange)rangeOfRegex:(id)arg1 options:(unsigned int)arg2 inRange:(struct _NSRange)arg3 capture:(long long)arg4 error:(id *)arg5;
- (struct _NSRange)rangeOfRegex:(id)arg1 inRange:(struct _NSRange)arg2;
- (struct _NSRange)rangeOfRegex:(id)arg1 capture:(long long)arg2;
- (struct _NSRange)rangeOfRegex:(id)arg1;
- (void)flushCachedRegexData;
- (BOOL)isRegexValidWithOptions:(unsigned int)arg1 error:(id *)arg2;
- (BOOL)isRegexValid;
- (BOOL)isMatchedByRegex:(id)arg1 options:(unsigned int)arg2 inRange:(struct _NSRange)arg3 error:(id *)arg4;
- (BOOL)isMatchedByRegex:(id)arg1 inRange:(struct _NSRange)arg2;
- (BOOL)isMatchedByRegex:(id)arg1;
- (id)componentsSeparatedByRegex:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 error:(id *)arg4;
- (id)componentsSeparatedByRegex:(id)arg1 range:(struct _NSRange)arg2;
- (id)componentsSeparatedByRegex:(id)arg1;
- (long long)captureCountWithOptions:(unsigned int)arg1 error:(id *)arg2;
- (long long)captureCount;
- (BOOL)isContentDifferentTo:(id)arg1;
- (BOOL)isNilOrEmpty;
- (id)URLEncodedString;
- (id)sqliteString;
- (id)getContentAndRangeFromAttributeString;
- (id)dropAeraCode;
- (id)formatChinaPhoneString:(id)arg1;
- (BOOL)isEmailAddress;
- (BOOL)isMobilePhone;
- (BOOL)isCurrectPhoneNum;
- (BOOL)isNumericStr;
- (id)XXXString;
- (id)dropHead:(id)arg1;
- (BOOL)checkIsLegalMobile:(unsigned short *)arg1 bufLen:(int)arg2;
- (id)getTelPhoneNumberAreaString:(char *)arg1;
- (id)GetTelPhoneNumberAreaString;
- (id)getTelPhoneNumbersWithComma;
- (id)GetTelPhoneNumber;
- (id)MD5Data;
- (id)MD5String;
- (unsigned int)uInt32Value;
- (unsigned long long)uInt64Value;
- (id)rac_description;
- (id)rac_keyPathByDeletingFirstKeyPathComponent;
- (id)rac_keyPathByDeletingLastKeyPathComponent;
- (id)rac_keyPathComponents;
@property(readonly, copy, nonatomic) RACSequence *rac_sequence;
- (id)XMLEncodedString;
- (id)wa_JSONDictionary;
- (id)wa_JSONArray;
- (id)wa_JSONValue;
- (id)gtm_stringBySanitizingToXMLSpec;
- (id)gtm_stringBySanitizingAndEscapingForXML;
- (id)gtm_stringByEncodeByJsonAndUrlEncode;
- (id)gtm_stringByUnescapingFromURLArgument;
- (id)gtm_stringByEscapingForURLArgumentOnly;
- (id)gtm_stringByEscapingForURLArgument;
- (unsigned long long)attachmentsCount;
- (BOOL)containAttachment;
- (unsigned short)lastCharcter;
- (unsigned short)firstCharcter;
- (id)truncateWithMaxCharacterCount:(long long)arg1;
- (long long)characterCount;
- (id)md5ShortString;
- (id)md5String;
- (struct _NSRange)safeRangeOfString:(id)arg1 option:(unsigned long long)arg2;
- (struct _NSRange)safeRangeOfString:(id)arg1;
- (BOOL)safeContainsString:(id)arg1;
- (id)stringByOmitPrefixAndSuffix:(id)arg1;
- (id)stringByOmitSuffix:(id)arg1;
- (id)stringByReplacingJavaScriptUnsupportString:(BOOL)arg1;
- (id)stringByReplacingJavaScriptUnsupportString;
- (id)stringByOmitPrefix:(id)arg1;
- (id)lastCharacter;
- (id)firstCharacter;
- (unsigned long long)characterLengthOfComposedCharacter;
- (id)stringWithMaxLength:(unsigned long long)arg1;
- (id)safeSubstringWithRange:(struct _NSRange)arg1;
- (id)safeSubstringToIndex:(long long)arg1;
- (id)safeSubstringFromIndex:(long long)arg1;
- (BOOL)containsSubstring:(id)arg1 option:(unsigned long long)arg2;
- (BOOL)containsSubstring:(id)arg1;
- (long long)compareWithUInt64:(id)arg1;
- (id)stringByEscapingAllLineBreak;
- (id)stringByTrimmingRight;
- (id)stringByTrimmingLeft;
- (id)stringByTrimming;
- (id)stringByTrimmingTrailingCharactersInSet:(id)arg1;
- (id)stringByTrimmingLeadingCharactersInSet:(id)arg1;
- (unsigned long long)uint64Value;
- (unsigned long long)unsignLongLongValue;
- (id)stringByAddingAppleConvertedSpace;
- (id)stringByReplacingHTMLEntities;
- (id)stringByAddingHTMLEntities;
- (BOOL)hasSuffixCharacterFromSet:(id)arg1;
- (BOOL)hasPrefixCharacterFromSet:(id)arg1;
- (id)stringByNormalizingWhitespace;
- (float)percentValue;
- (BOOL)isIgnorableWhitespace;
- (BOOL)isIdCardChar;
- (BOOL)isDigit;
- (BOOL)isNumeric;
- (unsigned long long)integerValueFromHex;
- (id)actualFont:(id)arg1 forWidth:(double)arg2;
- (struct CGSize)stringSizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2 lineBreakMode:(unsigned long long)arg3 lineSpacing:(double)arg4;
- (struct CGSize)stringSizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2 lineBreakMode:(unsigned long long)arg3;
- (struct CGSize)stringSizeWithFont:(id)arg1 forWidth:(double)arg2 lineBreakMode:(unsigned long long)arg3;
- (struct CGSize)stringSizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (struct CGSize)stringSizeWithFont:(id)arg1;
- (id)stringByUrlDecoded;
- (id)replaceHighlightTagWithColor:(id)arg1;
- (BOOL)isImageUTType;
- (BOOL)isPlainTextUTType;
- (BOOL)containsEmojiString;
- (id)emojiUnifiedString;
- (id)emojiSoftBankString;
- (id)stringByUrlEncoded;
- (id)JSONDictionary;
- (id)JSONArray;
- (id)JSONValue;
- (id)gtm_stringByUnescapingFromHTML;
- (id)gtm_stringByEscapingForXML;
- (id)gtm_stringByEscapingForAsciiHTML;
- (id)gtm_stringByEscapingForHTML;
- (id)gtm_stringByEscapingHTMLUsingTable:(CDStruct_6a59ab51 *)arg1 ofSize:(unsigned long long)arg2 escapingUnicode:(BOOL)arg3;
- (id)mm_safeSubstringWithRange:(struct _NSRange)arg1;
- (id)componentsSplitByWhiteSpace;
- (BOOL)isNumeric;
- (BOOL)containsAlpha;
- (id)componentsSeparatedByChars:(char *)arg1;
@end

