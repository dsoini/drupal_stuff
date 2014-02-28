<?php
/**
 * @file
 * Template for a 2 column panel layout.
 *
 * This template provides a two column panel display layout, with
 * each column roughly equal in width. It is 5 rows high; the top
 * middle and bottom rows contain 1 column, while the second
 * and fourth rows contain 2 columns.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['top_row_1']: Heading row for row 1.
 *   - $content['left_row_1']: Content in the left column in row 1.
 *   - $content['right_row_1']: Content in the right column in row 1.
 *   - $content['top_row_2']: Heading row for row 2.
 *   - $content['left_row_2']: Content in the left column in row 2.
 *   - $content['right_row_2']: Content in the right column in row 2.
 *   - $content['top_row_3']: Heading row for row 3.
 *   - $content['left_row_3']: Content in the left column in row 3.
 *   - $content['right_row_3']: Content in the right column in row 3.
 *   - ect...
 *   - $content['bottom']: Content in the bottom row.
 */
?>
<div class="panel-display panel-2col-bricks clearfix" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
<?php $total = 7;
    for($i=1;$i < $total;$i++):
        $top_key = 'top_row_'.$i;
        $left_key = 'left_row_'.$i;
        $right_key = 'right_row_'.$i;
        if($i == 1) $top_class = 'top';
        else  $top_class = 'middle';
    ?>
  <div class="panel-panel panel-col-<?php print $top_class;?> row-<?php print $i;?>">
    <div class="inside"><?php print $content[$top_key]; ?></div>
  </div>
  <div class="center-wrapper row-<?php print $i;?>">
    <div class="panel-panel panel-col-first">
      <div class="inside"><?php print $content[$left_key]; ?></div>
    </div>

    <div class="panel-panel panel-col-last">
      <div class="inside"><?php print $content[$right_key]; ?></div>
    </div>
  </div>
    <?php endfor; ?>
  <div class="panel-panel panel-col-bottom">
    <div class="inside"><?php print $content['bottom']; ?></div>
  </div>
</div>
