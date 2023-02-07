//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMBaseSearchLogic.h"

@class MessageData, NSArray, NSCharacterSet, NSMutableArray, NSMutableDictionary, WCContactData;

@interface MMSessionPickerLogic : MMBaseSearchLogic
{
    NSMutableArray *_displayedRows;
    NSMutableArray *_selectedRows;
    NSMutableArray *_reservedRows;
    NSMutableArray *_searchedRows;
    NSMutableDictionary *_availableRowsDic;
    NSArray *_groupsForSearch;
    NSArray *_contactsForSearch;
    BOOL _needsDetermineDisplayed;
    NSCharacterSet *_strictLetterCharacterSet;
    BOOL _allowsMultipleSelection;
    BOOL _showsGroupChats;
    BOOL _showsTags;
    BOOL _showsOfficialAccounts;
    BOOL _showsOtherNonhumanChats;
    WCContactData *_preSelectedContact;
    WCContactData *_assignedContact;
    NSArray *_availableContacts;
    NSArray *_filteredUserNames;
    NSArray *_preSelectedUserNames;
    NSArray *_initialSelectedResults;
    unsigned long long _sessionType;
    unsigned long long _keyboardFocusedRow;
    MessageData *_messData;
    NSArray *_assignedUserNames;
    unsigned long long _type;
    unsigned long long _subType;
}

+ (id)genAppFinderMessageData:(id)arg1;
+ (id)genAppURLMessageData:(id)arg1 url:(id)arg2 desc:(id)arg3;
+ (id)initWithMessageData:(id)arg1;
+ (id)wrapMessageDataByMessageList:(id)arg1 isNeedMerge:(BOOL)arg2 isToWeWork:(BOOL)arg3;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long subType; // @synthesize subType=_subType;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSArray *assignedUserNames; // @synthesize assignedUserNames=_assignedUserNames;
@property(retain, nonatomic) MessageData *messData; // @synthesize messData=_messData;
@property(nonatomic) unsigned long long keyboardFocusedRow; // @synthesize keyboardFocusedRow=_keyboardFocusedRow;
@property(nonatomic) unsigned long long sessionType; // @synthesize sessionType=_sessionType;
@property(retain, nonatomic) NSArray *initialSelectedResults; // @synthesize initialSelectedResults=_initialSelectedResults;
@property(retain, nonatomic) NSArray *preSelectedUserNames; // @synthesize preSelectedUserNames=_preSelectedUserNames;
@property(nonatomic) BOOL showsOtherNonhumanChats; // @synthesize showsOtherNonhumanChats=_showsOtherNonhumanChats;
@property(nonatomic) BOOL showsOfficialAccounts; // @synthesize showsOfficialAccounts=_showsOfficialAccounts;
@property(nonatomic) BOOL showsTags; // @synthesize showsTags=_showsTags;
@property(nonatomic) BOOL showsGroupChats; // @synthesize showsGroupChats=_showsGroupChats;
@property(nonatomic) BOOL allowsMultipleSelection; // @synthesize allowsMultipleSelection=_allowsMultipleSelection;
@property(retain, nonatomic) NSArray *filteredUserNames; // @synthesize filteredUserNames=_filteredUserNames;
@property(retain, nonatomic) NSArray *availableContacts; // @synthesize availableContacts=_availableContacts;
@property(retain, nonatomic) WCContactData *assignedContact; // @synthesize assignedContact=_assignedContact;
@property(retain, nonatomic) WCContactData *preSelectedContact; // @synthesize preSelectedContact=_preSelectedContact;
- (void)handleGetFullResultsAfterSearch:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleGetFoldedResultsAfterSearch:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleSearchResults:(id)arg1 withKeyWord:(id)arg2;
- (void)reloadSearchResultDataWithKeyword:(id)arg1 resultContainer:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)doSearchWithKeyword:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getContactSelectedEnableTitleForMsg:(id)arg1;
- (BOOL)isContactSelectedEnableForGroup:(id)arg1;
- (id)_normalizeNameString:(id)arg1;
- (id)generateGroupMemberList:(id)arg1 filterSelf:(BOOL)arg2;
- (id)generateAvailableTags;
- (id)generateAvailableContacts;
- (BOOL)shouldFilterContact:(id)arg1;
- (void)updatePickerRow:(id)arg1 withContact:(id)arg2;
- (void)updatePickerRow:(id)arg1 withTag:(id)arg2;
- (id)pickerRowFromContact:(id)arg1;
- (BOOL)isSkipKeyboardFocus:(id)arg1;
- (unsigned long long)firstKeyboardFocusableRow;
- (BOOL)focusPreviousRow;
- (BOOL)focusNextRow;
- (void)deselectedContact:(id)arg1;
- (void)deselectedTag:(id)arg1;
- (void)dePreSelectUserName:(id)arg1;
- (void)setChosen:(BOOL)arg1 andIsSingleChoice:(BOOL)arg2 forRow:(id)arg3;
- (void)resetGroupContactsForSearch;
- (void)resetContactsForSearch;
- (void)resetAllContactsForSearch;
- (void)resetDetermineDisplayedRows;
- (void)resetAvailableAndDisplayRowsChosenStatus:(BOOL)arg1;
- (void)resetDisplayRows;
- (void)resetCommonData;
- (void)removeAllSelectedUser;
- (void)clearLogicData;
- (void)setPickType:(unsigned long long)arg1 subType:(unsigned long long)arg2;
@property(readonly, nonatomic) BOOL isSearching;
- (void)setKeyword:(id)arg1;
@property(readonly, nonatomic) NSArray *contactsForSearch;
@property(readonly, nonatomic) NSArray *selectedRows;
@property(readonly, nonatomic) NSArray *displayedRows;
- (long long)getRowViewIndex:(id)arg1;
- (void)updateAvailableRowsStatus;
- (void)_determineSearchedRows;
- (void)_determineDisplayedRows;
- (void)_determineAvailableRows;
- (id)getCurAvailableKey;
- (id)init;

@end

