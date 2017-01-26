<?php
/**
 * @file
 * inkshop_content_types.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function inkshop_content_types_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Button mit javascript Back Funktion';
  $fe_block_boxes->format = 'html';
  $fe_block_boxes->machine_name = 'backlink';
  $fe_block_boxes->body = '<p><a class="btn back" href="#">Zurück</a></p>
';

  $export['backlink'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Südlink Abo Werbung Block';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'suedlink_abo_werbung';
  $fe_block_boxes->body = '<p><a href="node/1422" title="Südlink Magazin abonnieren">[[{"fid":"1346","view_mode":"default","fields":{"format":"default","field_file_image_alt_text[und][0][value]":"Südlink Logo","field_file_image_title_text[und][0][value]":false},"type":"media","link_text":null,"field_deltas":{"1":{"format":"default","field_file_image_alt_text[und][0][value]":"Südlink Logo","field_file_image_title_text[und][0][value]":false}},"attributes":{"alt":"Südlink Logo","height":290,"width":571,"style":"height: 102px; width: 200px;","class":"media-element file-default","data-delta":"1"}}]]</a></p>
';

  $export['suedlink_abo_werbung'] = $fe_block_boxes;

  return $export;
}
