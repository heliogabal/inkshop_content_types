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
  $fe_block_boxes->info = 'Südlink Abo Block';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'suedlink_abo';
  $fe_block_boxes->body = '<p>Zum Beispiel den Südlink im Probeabo (2 Ausgaben für 6 Euro ohne automatische Verlängerung):</p>&#13;
&#13;
<p><a href="/node/1422">Südlink-Abo online einrichten</a></p>&#13;
&#13;
<p><a href="/sites/webshop.inkota.de/files/bestellformular_suedlink_177.pdf">Bestellformular Südlink zum Ausdrucken</a> (PDF, 297 KB)</p>&#13;
&#13;
<h2>Angebot</h2>&#13;
&#13;
<p>Bei einer Bestellung ab 5 Exemplaren des Südlink (INKOTA-Brief) gibt es 20 Prozent, ab 10 Exemplaren 30 Prozent Rabatt. Der Rabatt wird automatisch beim Checkout berechnet.</p>&#13;
&#13;
<h2>Ansprechpartner</h2>&#13;
&#13;
<p><a href="mailto:kraemer@inkota.de">Michael Krämer</a></p>&#13;
';

  $export['suedlink_abo'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Südlink Abo Werbung Block';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'suedlink_abo_werbung';
  $fe_block_boxes->body = '<p><a href="node/1422" title="Südlink Magazin abonnieren">[[{"fid":"1346","view_mode":"default","fields":{"format":"default","field_file_image_alt_text[und][0][value]":"Südlink Logo","field_file_image_title_text[und][0][value]":false},"type":"media","link_text":null,"field_deltas":{"1":{"format":"default","field_file_image_alt_text[und][0][value]":"Südlink Logo","field_file_image_title_text[und][0][value]":false}},"attributes":{"alt":"Südlink Logo","height":290,"width":571,"style":"height: 116px; width: 228px;","class":"media-element file-default","data-delta":"1"}}]]</a></p>&#13;
';

  $export['suedlink_abo_werbung'] = $fe_block_boxes;

  return $export;
}
