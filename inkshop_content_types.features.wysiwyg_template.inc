<?php
/**
 * @file
 * inkshop_content_types.features.wysiwyg_template.inc
 */

/**
 * Implements hook_wysiwyg_template_default_templates().
 */
function inkshop_content_types_wysiwyg_template_default_templates() {
  $templates = array();
  $templates['finanzhinweis_brot_eed_nsb'] = array(
    'title' => 'Förderhinweis BMZ-EG, St.NordSüd, LEZ-Berlin, Brot',
    'description' => 'Logos: BMZ, Stiftung NordSüdBrücken, LEZ-Berlin, Text: + Brot für die Welt',
    'weight' => 2,
    'fid' => 0,
    'body' => '<div class="finanzhinweis"><p>Gefördert von Engagement Global im Auftrag des BMZ, der Landesstelle für Entwicklungszusammenarbeit des Landes Berlin, von der Stiftung Nord-Süd-Brücken sowie aus Mitteln des Kirchlichen Entwicklungsdienstes durch Brot für die Welt-Evangelischer Entwicklungsdienst. Für den Inhalt dieser Publikation ist der Herausgeber allein verantwortlich; die hier dargestellten Positionen geben nicht den Standpunkt der Zuwendungsgebern wieder.</p><p>[[{"fid":"1635","view_mode":"default","fields":{"format":"default","field_file_image_alt_text[und][0][value]":"Logo Stiftung Nord-Süd-Brücken","field_file_image_title_text[und][0][value]":false},"type":"media","field_deltas":{"1":{"format":"default","field_file_image_alt_text[und][0][value]":"Logo Stiftung Nord-Süd-Brücken","field_file_image_title_text[und][0][value]":false}},"link_text":null,"attributes":{"alt":"Logo Stiftung Nord-Süd-Brücken","height":50,"width":105,"class":"media-element file-default","data-delta":"1"}}]] [[{"fid":"1636","view_mode":"default","fields":{"format":"default","field_file_image_alt_text[und][0][value]":"Logo LEZ Berlin","field_file_image_title_text[und][0][value]":false},"type":"media","field_deltas":{"1":{"format":"default","field_file_image_alt_text[und][0][value]":"Logo LEZ Berlin","field_file_image_title_text[und][0][value]":false}},"link_text":null,"attributes":{"alt":"Logo LEZ Berlin","height":50,"width":254,"class":"media-element file-default","data-delta":"1"}}]] [[{"fid":"1637","view_mode":"default","fields":{"format":"default","field_file_image_alt_text[und][0][value]":"Logo BMZ","field_file_image_title_text[und][0][value]":false},"type":"media","field_deltas":{"1":{"format":"default","field_file_image_alt_text[und][0][value]":"Logo BMZ","field_file_image_title_text[und][0][value]":false}},"link_text":null,"attributes":{"alt":"Logo BMZ","height":55,"width":161,"class":"media-element file-default","data-delta":"1"}}]]</p></div>',
    'format' => 'full_html',
    'name' => 'finanzhinweis_brot_eed_nsb',
    'content_types' => array(
      'product_display' => 'Produktansicht',
    ),
  );
  return $templates;
}
