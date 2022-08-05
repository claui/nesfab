" Vim syntax file
" Language: NESFab
" Maintainer: Pubby

if exists("b:current_syntax")
  finish
endif

syn keyword nesfabKeyword if else for while do break continue then return fn ct mode goto label using file struct vars data omni

syntax match nesfabId "\l\k*"
syntax match nesfabType "\u\k*"

syntax match nesfabGroup "/\k\+"

" Integer with - + or nothing in front
syn match nesfabNumber '[-+]\?\d\+'
syn match nesfabNumberHex '[-+]\?\$\x\+'
syn match nesfabNumberBin '[-+]\?%[01]\+'

" Comment
syn match nesfabComment "//.*$"

" String
syn region nesfabString start='"' end='"' contained

let b:current_syntax = "nesfab"

hi def link nesfabNumber  Constant
hi def link nesfabNumberHex  Constant
hi def link nesfabNumberBin  Constant
hi def link nesfabComment Comment
hi def link nesfabString  String
hi def link nesfabKeyword Statement
hi def link nesfabGroup   Identifier
hi def link nesfabType    Type