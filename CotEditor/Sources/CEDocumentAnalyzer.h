/*
 ==============================================================================
 CEDocumentAnalyzer
 
 CotEditor
 http://coteditor.com
 
 Created on 2014-12-18 by 1024jp
 encoding="UTF-8"
 ------------------------------------------------------------------------------
 
 © 2014 1024jp
 
 This program is free software; you can redistribute it and/or modify it under
 the terms of the GNU General Public License as published by the Free Software
 Foundation; either version 2 of the License, or (at your option) any later
 version.
 
 This program is distributed in the hope that it will be useful, but WITHOUT
 ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License along with
 this program; if not, write to the Free Software Foundation, Inc., 59 Temple
 Place - Suite 330, Boston, MA  02111-1307, USA.
 
 ==============================================================================
 */

@import Cocoa;


// notifications
extern NSString *const CEAnalyzerDidUpdateFileInfoNotification;
extern NSString *const CEAnalyzerDidUpdateModeInfoNotification;
extern NSString *const CEAnalyzerDidUpdateEditorInfoNotification;


@class CEDocument;


@interface CEDocumentAnalyzer : NSObject

@property (nonatomic, weak) CEDocument *document;

// file info
@property (readonly, nonatomic) NSString *creationDate;
@property (readonly, nonatomic) NSString *modificationDate;
@property (readonly, nonatomic) NSString *fileSize;
@property (readonly, nonatomic) NSString *owner;
@property (readonly, nonatomic) NSString *permission;
@property (readonly, nonatomic) NSString *locked;
@property (readonly, nonatomic) NSString *HFSType;
@property (readonly, nonatomic) NSString *HFSCreator;

// mode info
@property (readonly, nonatomic) NSString *encoding;
@property (readonly, nonatomic) NSString *charsetName;
@property (readonly, nonatomic) NSString *lineEndings;

// editor info
@property (readonly, nonatomic) NSString *lines;
@property (readonly, nonatomic) NSString *chars;
@property (readonly, nonatomic) NSString *words;
@property (readonly, nonatomic) NSString *length;
@property (readonly, nonatomic) NSString *byteLength;
@property (readonly, nonatomic) NSString *location;  // caret location from begining of document
@property (readonly, nonatomic) NSString *line;      // current line
@property (readonly, nonatomic) NSString *column;    // caret location from line head
@property (readonly, nonatomic) NSString *unicode;   // Unicode of selected single character (or surrogate-pair)


- (void)updateFileInfo;
- (void)updateModeInfo;
- (void)updateEditorInfo:(BOOL)needsAll;

@end
