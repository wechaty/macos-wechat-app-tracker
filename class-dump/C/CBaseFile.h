//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileHandle, NSString;

@interface CBaseFile : NSObject
{
    NSFileHandle *m_fhFile;
    NSString *m_nsFilePath;
    unsigned int m_uiMode;
    BOOL m_bOpen;
}

+ (BOOL)IsFolder:(id)arg1;
+ (long long)GetFolderSizeAtPath:(id)arg1;
+ (id)AttributesOfFile:(id)arg1;
+ (id)GetFileReferenceCount:(id)arg1;
+ (id)GetFileINodeNumber:(id)arg1;
+ (id)GetFileCreateTime:(id)arg1;
+ (id)GetFileMD5:(id)arg1;
+ (BOOL)SysAppendData:(id)arg1 toPath:(id)arg2;
+ (BOOL)SysOverWriteDataToPath:(id)arg1 Data:(id)arg2;
+ (BOOL)OverWriteDataToPath:(id)arg1 Data:(id)arg2;
+ (BOOL)AppendData:(id)arg1 toPath:(id)arg2;
+ (BOOL)WriteDataToPath:(id)arg1 Offset:(unsigned int)arg2 Data:(id)arg3;
+ (id)LoadDataFromPathEx:(id)arg1 Offset:(unsigned int)arg2 MaxLen:(unsigned int)arg3;
+ (id)LoadDataFromPath:(id)arg1 Offset:(unsigned int)arg2 Len:(unsigned int)arg3;
+ (BOOL)CreateHardLink:(id)arg1 LinkName:(id)arg2;
+ (BOOL)CreateSymbolLink:(id)arg1 LinkName:(id)arg2;
+ (void)ClearFolderOnRemove:(id)arg1;
+ (void)ClearFolder:(id)arg1;
+ (BOOL)RemoveFile:(id)arg1;
+ (BOOL)LoadSubFolders:(id)arg1 SubFiles:(id)arg2 fromFolderPath:(const char *)arg3;
+ (id)SubFilesName:(const char *)arg1;
+ (id)SubFoldersName:(const char *)arg1;
+ (long long)FolderSizeAtPath:(const char *)arg1;
+ (long long)GetFileSize:(id)arg1;
+ (long long)GetFiLeModifyTime:(id)arg1;
+ (BOOL)FileExist:(id)arg1;
+ (BOOL)SafeCopyFile:(id)arg1 To:(id)arg2;
+ (BOOL)CopyFile:(id)arg1 To:(id)arg2;
+ (BOOL)RenameFile:(id)arg1 To:(id)arg2;
+ (void)EnsureCreateParentDir:(id)arg1;
+ (BOOL)CreateFolder:(id)arg1;
+ (BOOL)CreateFile:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSFileHandle *m_fhFile; // @synthesize m_fhFile;
@property(copy, nonatomic) NSString *m_nsFilePath; // @synthesize m_nsFilePath;
- (BOOL)WriteLargeData:(id)arg1;
- (BOOL)WriteData:(id)arg1;
- (BOOL)ReadData:(id)arg1 Len:(unsigned int)arg2;
- (unsigned long long)SeekToEndOfFile;
- (BOOL)Seek:(long long)arg1;
- (BOOL)SetFileSize:(long long)arg1;
- (void)Close;
- (BOOL)Open;
- (BOOL)IsOpen;
- (BOOL)SetFileInfo:(id)arg1 Mode:(unsigned int)arg2;
- (void)dealloc;
- (id)init;

@end

