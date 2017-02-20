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
  $fe_block_boxes->body = '<p><a href="node/1422">[[{"fid":"1346","view_mode":"default","fields":{"format":"default","alignment":"","field_file_image_alt_text[und][0][value]":"Südlink Magazin Logo","field_file_image_title_text[und][0][value]":"Südlink Magazin abonnieren"},"type":"media","field_deltas":{"1":{"format":"default","field_file_image_alt_text[und][0][value]":"Südlink Logo","field_file_image_title_text[und][0][value]":""},"2":{"format":"default","alignment":"","field_file_image_alt_text[und][0][value]":"Südlink Magazin Logo","field_file_image_title_text[und][0][value]":"Südlink Magazin abonnieren"}},"attributes":{"alt":"Südlink Magazin Logo","title":"Südlink Magazin abonnieren","height":290,"width":571,"style":"width: 200px; height: 102px;","class":"media-element file-default","data-delta":"2"},"link_text":null}]]</a></p>
';

  $export['suedlink_abo_werbung'] = $fe_block_boxes;

  return $export;
}
