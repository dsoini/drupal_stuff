<?php
/**
 * @file
 * Template for a 2 column grid panel layout.
 *
 * This template provides a two column panel display layout, with
 * each column roughly equal in width.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections in a 2x6 grid
 *   where X is the row number:
 *   - $content['leftX']: Content in the left column.
 *   - $content['rightX']: Content in the right column.
 */
?>

<div class="panel-display panel-2col-grid clearfix" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
<div class="clearfix panel-2col-grid-row1">
<!--row1-->
  <div class="panel-panel panel-col-first">
    <div class="inside"><?php print $content['left1']; ?></div>
  </div>

  <div class="panel-panel panel-col-last">
    <div class="inside"><?php print $content['right1']; ?></div>
  </div>
  
</div>
<div class="clearfix panel-2col-grid-row2">
<!--row2-->
  <div class="panel-panel panel-col-first">
    <div class="inside"><?php print $content['left2']; ?></div>
  </div>
  
  <div class="panel-panel panel-col-last">
    <div class="inside"><?php print $content['right2']; ?></div>
  </div>
</div>
<div class="clearfix panel-2col-grid-row3">
<!--row3-->
  <div class="panel-panel panel-col-first">
    <div class="inside"><?php print $content['left3']; ?></div>
  </div>

  <div class="panel-panel panel-col-last">
    <div class="inside"><?php print $content['right3']; ?></div>
  </div>
  
</div>
<div class="clearfix panel-2col-grid-row4">
<!--row4-->
  <div class="panel-panel panel-col-first">
    <div class="inside"><?php print $content['left4']; ?></div>
  </div>

  <div class="panel-panel panel-col-last">
    <div class="inside"><?php print $content['right4']; ?></div>
  </div>
</div>
<div class="clearfix panel-2col-grid-row5">
<!--row5-->
  <div class="panel-panel panel-col-first">
    <div class="inside"><?php print $content['left5']; ?></div>
  </div>

  <div class="panel-panel panel-col-last">
    <div class="inside"><?php print $content['right5']; ?></div>
  </div>
</div>
<div class="clearfix panel-2col-grid-row6">
<!--row6-->
  <div class="panel-panel panel-col-first">
    <div class="inside"><?php print $content['left6']; ?></div>
  </div>

  <div class="panel-panel panel-col-last">
    <div class="inside"><?php print $content['right6']; ?></div>
  </div>
</div>
<div class="clearfix panel-2col-grid-row7">
<!--row7-->
  <div class="panel-panel panel-col-first">
    <div class="inside"><?php print $content['left7']; ?></div>
  </div>

  <div class="panel-panel panel-col-last">
    <div class="inside"><?php print $content['right7']; ?></div>
  </div>
</div>
<div class="clearfix panel-2col-grid-row8">
<!--row8-->
  <div class="panel-panel panel-col-first">
    <div class="inside"><?php print $content['left8']; ?></div>
  </div>

  <div class="panel-panel panel-col-last">
    <div class="inside"><?php print $content['right8']; ?></div>
  </div>
</div>
<div class="clearfix panel-2col-grid-row9">
<!--row9-->
  <div class="panel-panel panel-col-first">
    <div class="inside"><?php print $content['left9']; ?></div>
  </div>

  <div class="panel-panel panel-col-last">
    <div class="inside"><?php print $content['right9']; ?></div>
  </div>
</div>
</div>
