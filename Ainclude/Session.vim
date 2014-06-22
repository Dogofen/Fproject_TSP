let SessionLoad = 1
if &cp | set nocp | endif
let s:cpo_save=&cpo
set cpo&vim
inoremap <expr> <Down> pumvisible() ? "\" : "\<Down>"
inoremap <silent> <C-Tab> =UltiSnips_ListSnippets()
inoremap <silent> <C-.> =UltiSnips_JumpBackwards()
imap <F6> <F6>
imap <F5> <F5>
imap <silent> <M-Down> :wincmd j
imap <M-Right> :tabn
imap <M-Left> :tabp
nmap  :set insertmode
nmap  :Error
nmap  :MRU
snoremap <silent>  c
snoremap <silent> 	 :call UltiSnips_JumpForwards()
nmap  i
nmap  :NERDTreeToggle
vmap  :redov
nmap  :redo
nmap  :w
nmap  :ConqueTermTab bash
vmap  :undov
nmap  :undo
nmap  <M-Down>:close
nnoremap 'd :YcmShowDetailedDiagnostic
xnoremap <silent> ''w :call EasyMotion#WB(1, 0)
onoremap <silent> ''w :call EasyMotion#WB(0, 0)
nnoremap <silent> ''w :call EasyMotion#WB(0, 0)
xnoremap <silent> ''t :call EasyMotion#T(1, 0)
onoremap <silent> ''t :call EasyMotion#T(0, 0)
nnoremap <silent> ''t :call EasyMotion#T(0, 0)
xnoremap <silent> ''n :call EasyMotion#Search(1, 0)
onoremap <silent> ''n :call EasyMotion#Search(0, 0)
nnoremap <silent> ''n :call EasyMotion#Search(0, 0)
xnoremap <silent> ''k :call EasyMotion#JK(1, 1)
onoremap <silent> ''k :call EasyMotion#JK(0, 1)
nnoremap <silent> ''k :call EasyMotion#JK(0, 1)
xnoremap <silent> ''j :call EasyMotion#JK(1, 0)
onoremap <silent> ''j :call EasyMotion#JK(0, 0)
nnoremap <silent> ''j :call EasyMotion#JK(0, 0)
xnoremap <silent> ''gE :call EasyMotion#EW(1, 1)
onoremap <silent> ''gE :call EasyMotion#EW(0, 1)
nnoremap <silent> ''gE :call EasyMotion#EW(0, 1)
xnoremap <silent> ''f :call EasyMotion#F(1, 0)
onoremap <silent> ''f :call EasyMotion#F(0, 0)
nnoremap <silent> ''f :call EasyMotion#F(0, 0)
xnoremap <silent> ''e :call EasyMotion#E(1, 0)
onoremap <silent> ''e :call EasyMotion#E(0, 0)
nnoremap <silent> ''e :call EasyMotion#E(0, 0)
xnoremap <silent> ''b :call EasyMotion#WB(1, 1)
onoremap <silent> ''b :call EasyMotion#WB(0, 1)
nnoremap <silent> ''b :call EasyMotion#WB(0, 1)
xnoremap <silent> ''W :call EasyMotion#WBW(1, 0)
onoremap <silent> ''W :call EasyMotion#WBW(0, 0)
nnoremap <silent> ''W :call EasyMotion#WBW(0, 0)
xnoremap <silent> ''T :call EasyMotion#T(1, 1)
onoremap <silent> ''T :call EasyMotion#T(0, 1)
nnoremap <silent> ''T :call EasyMotion#T(0, 1)
xnoremap <silent> ''N :call EasyMotion#Search(1, 1)
onoremap <silent> ''N :call EasyMotion#Search(0, 1)
nnoremap <silent> ''N :call EasyMotion#Search(0, 1)
xnoremap <silent> ''ge :call EasyMotion#E(1, 1)
onoremap <silent> ''ge :call EasyMotion#E(0, 1)
nnoremap <silent> ''ge :call EasyMotion#E(0, 1)
xnoremap <silent> ''F :call EasyMotion#F(1, 1)
onoremap <silent> ''F :call EasyMotion#F(0, 1)
nnoremap <silent> ''F :call EasyMotion#F(0, 1)
xnoremap <silent> ''E :call EasyMotion#EW(1, 0)
onoremap <silent> ''E :call EasyMotion#EW(0, 0)
nnoremap <silent> ''E :call EasyMotion#EW(0, 0)
xnoremap <silent> ''B :call EasyMotion#WBW(1, 1)
onoremap <silent> ''B :call EasyMotion#WBW(0, 1)
nnoremap <silent> ''B :call EasyMotion#WBW(0, 1)
nmap 'x :x!
nmap 'z :qa!
nmap 'q :q
nmap 'w :w!
inoremap   
inoremap ° :tabnext 0
inoremap ¹ :tabnext 9
inoremap ¸ o>tabnext 8
inoremap · :tabnext 7
inoremap ¶ :tabnext 6
inoremap µ :tabnext 5
inoremap ´ :tabnext 4
inoremap ³ :tabnext 3
inoremap ² :tabnext 2
inoremap ± :tabnext 1
xnoremap ` :call UltiSnips_SaveLastVisualSelection()gvs
snoremap <silent> ` :call UltiSnips_ExpandSnippet()
nmap gx <Plug>NetrwBrowseX
nnoremap <silent> <Plug>NetrwBrowseX :call netrw#NetrwBrowseX(expand("<cWORD>"),0)
nnoremap <silent> <F11> :call conque_term#exec_file()
snoremap <silent> <Del> c
snoremap <silent> <BS> c
snoremap <silent> <C-Tab> :call UltiSnips_ListSnippets()
snoremap <silent> <C-.> :call UltiSnips_JumpBackwards()
nmap <F6> :make run
nmap <F5> :make all
nmap <M-Up> :tabnew
nmap <silent> <M-Right> :tabn
nmap <silent> <M-Left> :tabp
nmap <silent> <M-Down> :wincmd j
imap  :set noim
imap  b
imap  ''w
imap  :Error
imap  :MRU
imap  h
inoremap <expr> 	 pumvisible() ? "\" : "\	"
imap <NL> j
imap  k
imap  l
imap  :NERDTreeToggle
imap  p
imap  :q!
imap  :redoi
imap  :w
imap  :ConqueTermTab bash
imap  ''b
imap  v
imap  w
imap  :d
imap  :undoi
imap  <M-Down>:close
imap  :
inoremap <expr> <\> pumvisible() ? "\" : "\<\>"
nnoremap ° :tabnext 0
xnoremap ° :tabnext 0
onoremap ° :tabnext 0
nnoremap ¹ :tabnext 9
xnoremap ¹ :tabnext 9
onoremap ¹ :tabnext 9
nnoremap ¸ :tabnext 8
xnoremap ¸ :tabnext 8
onoremap ¸ :tabnext 8
nnoremap · :tabnext 7
xnoremap · :tabnext 7
onoremap · :tabnext 7
nnoremap ¶ :tabnext 6
xnoremap ¶ :tabnext 6
onoremap ¶ :tabnext 6
nnoremap µ :tabnext 5
xnoremap µ :tabnext 5
onoremap µ :tabnext 5
nnoremap ´ :tabnext 4
xnoremap ´ :tabnext 4
onoremap ´ :tabnext 4
nnoremap ³ :tabnext 3
xnoremap ³ :tabnext 3
onoremap ³ :tabnext 3
nnoremap ² :tabnext 2
xnoremap ² :tabnext 2
onoremap ² :tabnext 2
nnoremap ± :tabnext 1
xnoremap ± :tabnext 1
onoremap ± :tabnext 1
inoremap <silent> ` =g:UltiSnips_Complete()
let &cpo=s:cpo_save
unlet s:cpo_save
set autochdir
set autoindent
set autoread
set backspace=indent,eol,start
set balloonexpr=SyntasticBalloonsExprNotifier()
set completefunc=youcompleteme#Complete
set completeopt=preview,menuone
set cpoptions=aAceFsB
set fileencodings=ucs-bom,utf-8,default,latin1
set guicursor=a:blinkon0
set guioptions=aegimLt
set guitablabel=%!GuiTabLabeler()
set helplang=en
set hidden
set history=1000
set laststatus=2
set listchars=tab:\ .,trail:·
set mouse=a
set omnifunc=youcompleteme#OmniComplete
set runtimepath=~/.vim,~/.vim/bundle/Conque-Shell,~/.vim/bundle/YouCompleteMe-master,~/.vim/bundle/nerdtree-master,~/.vim/bundle/syntastic,~/.vim/bundle/ultisnips,~/.vim/bundle/vim-debug,~/.vim/bundle/vim-easymotion,~/.vim/bundle/vundle,/usr/share/vim/vimfiles,/usr/share/vim/vim74,/usr/share/vim/vimfiles/after,~/.vim/bundle/ultisnips/after,~/.vim/after
set scrolloff=8
set shiftwidth=4
set showcmd
set sidescroll=1
set sidescrolloff=15
set smartindent
set smarttab
set softtabstop=4
set statusline=%{SyntasticStatuslineFlag()}%#warningmsg#%*%4*\ %<%F%*%<%f\ %h%m%r%=%-14.(%l,%c%V%)\ %P
set noswapfile
set tabstop=4
set termencoding=utf-8
set undodir=~/.vim/undo
set undofile
set updatetime=2000
set visualbell
set wildignore=*.o,*.obj,*~,*vim/backups*,*sass-cache*,*DS_Store*,vendor/rails/**,vendor/cache/**,*.gem,log/**,tmp/**,*.png,*.jpg,*.gif,*.pyc
set wildmenu
set wildmode=list:longest
set window=40
set nowritebackup
let s:so_save = &so | let s:siso_save = &siso | set so=0 siso=0
let v:this_session=expand("<sfile>:p")
silent only
cd ~/Dropbox/Projects_DataStructures/Ainclude
if expand('%') == '' && !&modified && line('$') <= 1 && getline(1) == ''
  let s:wipebuf = bufnr('%')
endif
set shortmess=aoO
badd +3 ~/.bitcoin/database/log.0000000001
badd +125 ~/bitcoin/src/wallet.cpp
badd +92 ~/Dropbox/Projects_DataStructures/FinalProject/genetic.cpp
badd +1 ~/Dropbox/Projects_DataStructures/FinalProject/main.cpp
badd +33 ~/Dropbox/Projects_DataStructures/Ainclude/genetic.hpp
badd +0 ~/Dropbox/Projects_DataStructures/Ainclude/bmp.hpp
badd +37 /usr/include/c++/4.6/bits/c++0x_warning.h
badd +0 ~/.vim/.ycm_extra_conf.py
silent! argdel *
edit ~/Dropbox/Projects_DataStructures/Ainclude/genetic.hpp
set splitbelow splitright
set nosplitbelow
set nosplitright
wincmd t
set winheight=1 winwidth=1
argglobal
setlocal keymap=
setlocal noarabic
setlocal autoindent
setlocal balloonexpr=
setlocal nobinary
setlocal bufhidden=
setlocal buflisted
setlocal buftype=
setlocal cindent
setlocal cinkeys=0{,0},0),:,0#,!^F,o,O,e
setlocal cinoptions=
setlocal cinwords=if,else,while,do,for,switch
setlocal colorcolumn=
setlocal comments=sO:*\ -,mO:*\ \ ,exO:*/,s1:/*,mb:*,ex:*/,://
setlocal commentstring=/*%s*/
setlocal complete=.,w,b,u,t,i
setlocal concealcursor=
setlocal conceallevel=0
setlocal completefunc=youcompleteme#Complete
setlocal nocopyindent
setlocal cryptmethod=
setlocal nocursorbind
setlocal nocursorcolumn
setlocal nocursorline
setlocal define=
setlocal dictionary=
setlocal nodiff
setlocal equalprg=
setlocal errorformat=
setlocal noexpandtab
if &filetype != 'cpp'
setlocal filetype=cpp
endif
setlocal foldcolumn=0
setlocal foldenable
setlocal foldexpr=0
setlocal foldignore=#
setlocal foldlevel=0
setlocal foldmarker={{{,}}}
setlocal foldmethod=manual
setlocal foldminlines=1
setlocal foldnestmax=20
setlocal foldtext=foldtext()
setlocal formatexpr=
setlocal formatoptions=croql
setlocal formatlistpat=^\\s*\\d\\+[\\]:.)}\\t\ ]\\s*
setlocal grepprg=
setlocal iminsert=2
setlocal imsearch=2
setlocal include=
setlocal includeexpr=
setlocal indentexpr=
setlocal indentkeys=0{,0},:,0#,!^F,o,O,e
setlocal noinfercase
setlocal iskeyword=@,48-57,_,192-255
setlocal keywordprg=
set linebreak
setlocal linebreak
setlocal nolisp
set list
setlocal list
setlocal makeprg=
setlocal matchpairs=(:),{:},[:]
setlocal modeline
setlocal modifiable
setlocal nrformats=octal,hex
set number
setlocal number
setlocal numberwidth=4
setlocal omnifunc=youcompleteme#OmniComplete
setlocal path=
setlocal nopreserveindent
setlocal nopreviewwindow
setlocal quoteescape=\\
setlocal noreadonly
setlocal norelativenumber
setlocal norightleft
setlocal rightleftcmd=search
setlocal noscrollbind
setlocal shiftwidth=4
setlocal noshortname
setlocal smartindent
setlocal softtabstop=4
setlocal nospell
setlocal spellcapcheck=[.?!]\\_[\\])'\"\	\ ]\\+
setlocal spellfile=
setlocal spelllang=en
setlocal statusline=%{SyntasticStatuslineFlag()}%#warningmsg#%*%4*\ %<%F%*%<%#StatColor#%f%*\ %h%m%r%=%-14.(%l,%c%V%)\ %P
setlocal suffixesadd=
setlocal noswapfile
setlocal synmaxcol=3000
if &syntax != 'cpp'
setlocal syntax=cpp
endif
setlocal tabstop=4
setlocal tags=
setlocal textwidth=0
setlocal thesaurus=
setlocal undofile
setlocal undolevels=-123456
setlocal nowinfixheight
setlocal nowinfixwidth
set nowrap
setlocal nowrap
setlocal wrapmargin=0
silent! normal! zE
let s:l = 12 - ((11 * winheight(0) + 19) / 39)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
12
normal! 07|
tabedit ~/Dropbox/Projects_DataStructures/FinalProject/genetic.cpp
set splitbelow splitright
set nosplitbelow
set nosplitright
wincmd t
set winheight=1 winwidth=1
argglobal
setlocal keymap=
setlocal noarabic
setlocal autoindent
setlocal balloonexpr=
setlocal nobinary
setlocal bufhidden=
setlocal buflisted
setlocal buftype=
setlocal cindent
setlocal cinkeys=0{,0},0),:,0#,!^F,o,O,e
setlocal cinoptions=
setlocal cinwords=if,else,while,do,for,switch
setlocal colorcolumn=
setlocal comments=sO:*\ -,mO:*\ \ ,exO:*/,s1:/*,mb:*,ex:*/,://
setlocal commentstring=/*%s*/
setlocal complete=.,w,b,u,t,i
setlocal concealcursor=
setlocal conceallevel=0
setlocal completefunc=youcompleteme#Complete
setlocal nocopyindent
setlocal cryptmethod=
setlocal nocursorbind
setlocal nocursorcolumn
setlocal nocursorline
setlocal define=
setlocal dictionary=
setlocal nodiff
setlocal equalprg=
setlocal errorformat=
setlocal noexpandtab
if &filetype != 'cpp'
setlocal filetype=cpp
endif
setlocal foldcolumn=0
setlocal foldenable
setlocal foldexpr=0
setlocal foldignore=#
setlocal foldlevel=0
setlocal foldmarker={{{,}}}
setlocal foldmethod=manual
setlocal foldminlines=1
setlocal foldnestmax=20
setlocal foldtext=foldtext()
setlocal formatexpr=
setlocal formatoptions=croql
setlocal formatlistpat=^\\s*\\d\\+[\\]:.)}\\t\ ]\\s*
setlocal grepprg=
setlocal iminsert=2
setlocal imsearch=2
setlocal include=
setlocal includeexpr=
setlocal indentexpr=
setlocal indentkeys=0{,0},:,0#,!^F,o,O,e
setlocal noinfercase
setlocal iskeyword=@,48-57,_,192-255
setlocal keywordprg=
set linebreak
setlocal linebreak
setlocal nolisp
set list
setlocal list
setlocal makeprg=
setlocal matchpairs=(:),{:},[:]
setlocal modeline
setlocal modifiable
setlocal nrformats=octal,hex
set number
setlocal number
setlocal numberwidth=4
setlocal omnifunc=youcompleteme#OmniComplete
setlocal path=
setlocal nopreserveindent
setlocal nopreviewwindow
setlocal quoteescape=\\
setlocal noreadonly
setlocal norelativenumber
setlocal norightleft
setlocal rightleftcmd=search
setlocal noscrollbind
setlocal shiftwidth=4
setlocal noshortname
setlocal smartindent
setlocal softtabstop=4
setlocal nospell
setlocal spellcapcheck=[.?!]\\_[\\])'\"\	\ ]\\+
setlocal spellfile=
setlocal spelllang=en
setlocal statusline=%{SyntasticStatuslineFlag()}%#warningmsg#%*%4*\ %<%F%*%<%f\ %h%m%r%=%-14.(%l,%c%V%)\ %P
setlocal suffixesadd=
setlocal noswapfile
setlocal synmaxcol=3000
if &syntax != 'cpp'
setlocal syntax=cpp
endif
setlocal tabstop=4
setlocal tags=
setlocal textwidth=0
setlocal thesaurus=
setlocal undofile
setlocal undolevels=-123456
setlocal nowinfixheight
setlocal nowinfixwidth
set nowrap
setlocal nowrap
setlocal wrapmargin=0
silent! normal! zE
let s:l = 79 - ((36 * winheight(0) + 19) / 39)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
79
normal! 09|
tabedit ~/.vim/.ycm_extra_conf.py
set splitbelow splitright
set nosplitbelow
set nosplitright
wincmd t
set winheight=1 winwidth=1
argglobal
setlocal keymap=
setlocal noarabic
setlocal autoindent
setlocal balloonexpr=
setlocal nobinary
setlocal bufhidden=
setlocal buflisted
setlocal buftype=
setlocal nocindent
setlocal cinkeys=0{,0},0),:,!^F,o,O,e
setlocal cinoptions=
setlocal cinwords=if,else,while,do,for,switch
setlocal colorcolumn=
setlocal comments=b:#,fb:-
setlocal commentstring=#\ %s
setlocal complete=.,w,b,u,t,i
setlocal concealcursor=
setlocal conceallevel=0
setlocal completefunc=youcompleteme#Complete
setlocal nocopyindent
setlocal cryptmethod=
setlocal nocursorbind
setlocal nocursorcolumn
setlocal nocursorline
setlocal define=
setlocal dictionary=
setlocal nodiff
setlocal equalprg=
setlocal errorformat=
setlocal expandtab
if &filetype != 'python'
setlocal filetype=python
endif
setlocal foldcolumn=0
setlocal foldenable
setlocal foldexpr=0
setlocal foldignore=#
setlocal foldlevel=0
setlocal foldmarker={{{,}}}
setlocal foldmethod=manual
setlocal foldminlines=1
setlocal foldnestmax=20
setlocal foldtext=foldtext()
setlocal formatexpr=
setlocal formatoptions=tcq
setlocal formatlistpat=^\\s*\\d\\+[\\]:.)}\\t\ ]\\s*
setlocal grepprg=
setlocal iminsert=2
setlocal imsearch=2
setlocal include=s*\\(from\\|import\\)
setlocal includeexpr=substitute(v:fname,'\\.','/','g')
setlocal indentexpr=GetPythonIndent(v:lnum)
setlocal indentkeys=0{,0},:,!^F,o,O,e,<:>,=elif,=except
setlocal noinfercase
setlocal iskeyword=@,48-57,_,192-255
setlocal keywordprg=pydoc
set linebreak
setlocal linebreak
setlocal nolisp
set list
setlocal list
setlocal makeprg=
setlocal matchpairs=(:),{:},[:]
setlocal modeline
setlocal modifiable
setlocal nrformats=octal,hex
set number
setlocal number
setlocal numberwidth=4
setlocal omnifunc=youcompleteme#OmniComplete
setlocal path=
setlocal nopreserveindent
setlocal nopreviewwindow
setlocal quoteescape=\\
setlocal noreadonly
setlocal norelativenumber
setlocal norightleft
setlocal rightleftcmd=search
setlocal noscrollbind
setlocal shiftwidth=4
setlocal noshortname
setlocal smartindent
setlocal softtabstop=4
setlocal nospell
setlocal spellcapcheck=[.?!]\\_[\\])'\"\	\ ]\\+
setlocal spellfile=
setlocal spelllang=en
setlocal statusline=%{SyntasticStatuslineFlag()}%#warningmsg#%*%4*\ %<%F%*%<%f\ %h%m%r%=%-14.(%l,%c%V%)\ %P
setlocal suffixesadd=.py
setlocal noswapfile
setlocal synmaxcol=3000
if &syntax != 'python'
setlocal syntax=python
endif
setlocal tabstop=8
setlocal tags=
setlocal textwidth=0
setlocal thesaurus=
setlocal undofile
setlocal undolevels=-123456
setlocal nowinfixheight
setlocal nowinfixwidth
set nowrap
setlocal nowrap
setlocal wrapmargin=0
silent! normal! zE
let s:l = 59 - ((12 * winheight(0) + 19) / 39)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
59
normal! 0
tabedit ~/Dropbox/Projects_DataStructures/Ainclude/bmp.hpp
set splitbelow splitright
set nosplitbelow
set nosplitright
wincmd t
set winheight=1 winwidth=1
argglobal
setlocal keymap=
setlocal noarabic
setlocal autoindent
setlocal balloonexpr=
setlocal nobinary
setlocal bufhidden=
setlocal buflisted
setlocal buftype=
setlocal cindent
setlocal cinkeys=0{,0},0),:,0#,!^F,o,O,e
setlocal cinoptions=
setlocal cinwords=if,else,while,do,for,switch
setlocal colorcolumn=
setlocal comments=sO:*\ -,mO:*\ \ ,exO:*/,s1:/*,mb:*,ex:*/,://
setlocal commentstring=/*%s*/
setlocal complete=.,w,b,u,t,i
setlocal concealcursor=
setlocal conceallevel=0
setlocal completefunc=youcompleteme#Complete
setlocal nocopyindent
setlocal cryptmethod=
setlocal nocursorbind
setlocal nocursorcolumn
setlocal nocursorline
setlocal define=
setlocal dictionary=
setlocal nodiff
setlocal equalprg=
setlocal errorformat=
setlocal noexpandtab
if &filetype != 'cpp'
setlocal filetype=cpp
endif
setlocal foldcolumn=0
setlocal foldenable
setlocal foldexpr=0
setlocal foldignore=#
setlocal foldlevel=0
setlocal foldmarker={{{,}}}
setlocal foldmethod=manual
setlocal foldminlines=1
setlocal foldnestmax=20
setlocal foldtext=foldtext()
setlocal formatexpr=
setlocal formatoptions=croql
setlocal formatlistpat=^\\s*\\d\\+[\\]:.)}\\t\ ]\\s*
setlocal grepprg=
setlocal iminsert=2
setlocal imsearch=2
setlocal include=
setlocal includeexpr=
setlocal indentexpr=
setlocal indentkeys=0{,0},:,0#,!^F,o,O,e
setlocal noinfercase
setlocal iskeyword=@,48-57,_,192-255
setlocal keywordprg=
set linebreak
setlocal linebreak
setlocal nolisp
set list
setlocal list
setlocal makeprg=
setlocal matchpairs=(:),{:},[:]
setlocal modeline
setlocal modifiable
setlocal nrformats=octal,hex
set number
setlocal number
setlocal numberwidth=4
setlocal omnifunc=youcompleteme#OmniComplete
setlocal path=
setlocal nopreserveindent
setlocal nopreviewwindow
setlocal quoteescape=\\
setlocal noreadonly
setlocal norelativenumber
setlocal norightleft
setlocal rightleftcmd=search
setlocal noscrollbind
setlocal shiftwidth=4
setlocal noshortname
setlocal smartindent
setlocal softtabstop=4
setlocal nospell
setlocal spellcapcheck=[.?!]\\_[\\])'\"\	\ ]\\+
setlocal spellfile=
setlocal spelllang=en
setlocal statusline=%{SyntasticStatuslineFlag()}%#warningmsg#%*%4*\ %<%F%*%<%f\ %h%m%r%=%-14.(%l,%c%V%)\ %P
setlocal suffixesadd=
setlocal noswapfile
setlocal synmaxcol=3000
if &syntax != 'cpp'
setlocal syntax=cpp
endif
setlocal tabstop=4
setlocal tags=
setlocal textwidth=0
setlocal thesaurus=
setlocal undofile
setlocal undolevels=-123456
setlocal nowinfixheight
setlocal nowinfixwidth
set nowrap
setlocal nowrap
setlocal wrapmargin=0
silent! normal! zE
let s:l = 13 - ((12 * winheight(0) + 19) / 39)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
13
normal! 0
tabedit ~/Dropbox/Projects_DataStructures/FinalProject/main.cpp
set splitbelow splitright
set nosplitbelow
set nosplitright
wincmd t
set winheight=1 winwidth=1
argglobal
setlocal keymap=
setlocal noarabic
setlocal autoindent
setlocal balloonexpr=
setlocal nobinary
setlocal bufhidden=
setlocal buflisted
setlocal buftype=
setlocal cindent
setlocal cinkeys=0{,0},0),:,0#,!^F,o,O,e
setlocal cinoptions=
setlocal cinwords=if,else,while,do,for,switch
setlocal colorcolumn=
setlocal comments=sO:*\ -,mO:*\ \ ,exO:*/,s1:/*,mb:*,ex:*/,://
setlocal commentstring=/*%s*/
setlocal complete=.,w,b,u,t,i
setlocal concealcursor=
setlocal conceallevel=0
setlocal completefunc=youcompleteme#Complete
setlocal nocopyindent
setlocal cryptmethod=
setlocal nocursorbind
setlocal nocursorcolumn
setlocal nocursorline
setlocal define=
setlocal dictionary=
setlocal nodiff
setlocal equalprg=
setlocal errorformat=
setlocal noexpandtab
if &filetype != 'cpp'
setlocal filetype=cpp
endif
setlocal foldcolumn=0
setlocal foldenable
setlocal foldexpr=0
setlocal foldignore=#
setlocal foldlevel=0
setlocal foldmarker={{{,}}}
setlocal foldmethod=manual
setlocal foldminlines=1
setlocal foldnestmax=20
setlocal foldtext=foldtext()
setlocal formatexpr=
setlocal formatoptions=croql
setlocal formatlistpat=^\\s*\\d\\+[\\]:.)}\\t\ ]\\s*
setlocal grepprg=
setlocal iminsert=0
setlocal imsearch=2
setlocal include=
setlocal includeexpr=
setlocal indentexpr=
setlocal indentkeys=0{,0},:,0#,!^F,o,O,e
setlocal noinfercase
setlocal iskeyword=@,48-57,_,192-255
setlocal keywordprg=
set linebreak
setlocal linebreak
setlocal nolisp
set list
setlocal list
setlocal makeprg=
setlocal matchpairs=(:),{:},[:]
setlocal modeline
setlocal modifiable
setlocal nrformats=octal,hex
set number
setlocal number
setlocal numberwidth=4
setlocal omnifunc=youcompleteme#OmniComplete
setlocal path=
setlocal nopreserveindent
setlocal nopreviewwindow
setlocal quoteescape=\\
setlocal noreadonly
setlocal norelativenumber
setlocal norightleft
setlocal rightleftcmd=search
setlocal noscrollbind
setlocal shiftwidth=4
setlocal noshortname
setlocal smartindent
setlocal softtabstop=4
setlocal nospell
setlocal spellcapcheck=[.?!]\\_[\\])'\"\	\ ]\\+
setlocal spellfile=
setlocal spelllang=en
setlocal statusline=%{SyntasticStatuslineFlag()}%#warningmsg#%*%4*\ %<%F%*%<%f\ %h%m%r%=%-14.(%l,%c%V%)\ %P
setlocal suffixesadd=
setlocal noswapfile
setlocal synmaxcol=3000
if &syntax != 'cpp'
setlocal syntax=cpp
endif
setlocal tabstop=4
setlocal tags=
setlocal textwidth=0
setlocal thesaurus=
setlocal undofile
setlocal undolevels=-123456
setlocal nowinfixheight
setlocal nowinfixwidth
set nowrap
setlocal nowrap
setlocal wrapmargin=0
silent! normal! zE
let s:l = 4 - ((3 * winheight(0) + 19) / 39)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
4
normal! 0
tabnext 1
if exists('s:wipebuf')
  silent exe 'bwipe ' . s:wipebuf
endif
unlet! s:wipebuf
set winheight=1 winwidth=20 shortmess=filnxtToO
let s:sx = expand("<sfile>:p:r")."x.vim"
if file_readable(s:sx)
  exe "source " . fnameescape(s:sx)
endif
let &so = s:so_save | let &siso = s:siso_save
doautoall SessionLoadPost
unlet SessionLoad
" vim: set ft=vim :
