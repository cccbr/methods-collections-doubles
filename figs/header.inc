%!PS-Adobe-2.0 EPSF-2.0

% %%%%%%%%% %
% CONSTANTS %
% %%%%%%%%% %

/page_width 148.5 def
/page_height 210 def
/page_margin 10 def

/box_size 5 def
/width_grid   1 6 div def
/width_treble 2 3 div def
/width_bell   2 3 div def

/scalefactor 1 def


% %%%%%%%%% %
% FUNCTIONS %
% %%%%%%%%% %

/pointtomm { 2.83464567 div } bind def
/pointtoscale { pointtomm scalefactor mul } bind def

/x { page_margin add } bind def
/y { page_margin add page_height exch sub } bind def

/box_x { box_size mul x } bind def
/box_y { box_size mul y } bind def

/linewidth { pointtoscale setlinewidth } def

/centre { dup stringwidth pop 2 div 0 exch sub 0 rmoveto } bind def

/draw_gridlines {
  0 1 10 {
    dup
    0 x exch box_y moveto
    4 box_x exch box_y lineto
  } for

  0 1 4 {
    dup
    box_x 0 y moveto
    box_x 10 box_y lineto
  } for

  0 0 0 setrgbcolor
  width_grid linewidth
  stroke
} def

/draw_treble {
  1 0 0 setrgbcolor
  width_treble linewidth
  0 box_x  0 box_y moveto
  4 box_x  4 box_y lineto
  4 box_x  5 box_y lineto
  0 box_x  9 box_y lineto
  0 box_x 10 box_y lineto
  stroke
} def

/box_shade {
  0.9 dup dup setrgbcolor
  exch box_x
  exch 1 add box_y
  box_size box_size rectfill
} bind def

/box_stroke {
  0 0 1 setrgbcolor
  width_bell linewidth
  stroke
} bind def

/box_place {
  2 copy
  exch box_x
  exch box_y
  moveto
  exch box_x
  exch 1 add box_y
  lineto
  box_stroke
} bind def

/box_hunt_up {
  2 copy
  exch box_x
  exch box_y
  moveto
  exch 1 add box_x
  exch 1 add box_y
  lineto
  box_stroke
} bind def

/box_hunt_down {
  2 copy
  exch 1 add box_x
  exch box_y
  moveto
  exch box_x
  exch 1 add box_y
  lineto
  box_stroke
} bind def

/write_changes {
  /Courier findfont
  box_size 5 6 div mul scalefont setfont
  0 0 0 setcolor
  
  exch 5 box_x exch 2 3 div add box_y moveto
  show
} bind def

/write_headers {
  /Times-Bold findfont
  box_size 5 6 div mul scalefont setfont
  0 0 0 setcolor
  
  2 box_x -0.4 box_y moveto
  (Method) centre show
  
  5 box_x -0.4 box_y moveto
  (Changes) show
} def

% Scale the coordinates so that we're working in mm
1 1 pointtomm div dup scale
