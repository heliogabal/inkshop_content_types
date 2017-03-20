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
    'title' => 'Finanzhinweis Südlink',
    'description' => 'Obligatorischer Förderhinweis der unter jeden Südlink gehört',
    'weight' => 0,
    'fid' => 0,
    'body' => '<div class="finanzhinweis"><p>Gefördert von Engagement Global im Auftrag des BMZ, der Landesstelle für Entwicklungszusammenarbeit des Landes Berlin, von der Stiftung Nord-Süd-Brücken sowie aus Mitteln des Kirchlichen Entwicklungsdienstes durch Brot für die Welt-Evangelischer Entwicklungsdienst. Für den Inhalt dieser Publikation ist der Herausgeber allein verantwortlich; die hier dargestellten Positionen geben nicht den Standpunkt von Engagement Global gGmbH, dem Bundesministerium für wirtschaftliche Zusammenarbeit und Entwicklung, der Senatsverwaltung für Wirtschaft, Technologie und Forschung sowie den anderen Zuwendungsgebern wieder.</p><p>&nbsp;[[{"fid":"1625","view_mode":"default","fields":{"format":"default","field_file_image_alt_text[und][0][value]":"Logo Stiftung Nord-Süd-Brücken","field_file_image_title_text[und][0][value]":"Logo Stiftung Nord-Süd-Brücken"},"type":"media","field_deltas":{"1":{"format":"default","field_file_image_alt_text[und][0][value]":"Logo Stiftung Nord-Süd-Brücken","field_file_image_title_text[und][0][value]":"Logo Stiftung Nord-Süd-Brücken"}},"link_text":null,"attributes":{"alt":"Logo Stiftung Nord-Süd-Brücken","title":"Logo Stiftung Nord-Süd-Brücken","height":112,"width":234,"style":"width: 117px; height: 56px; float: left;","class":"media-element colorbox file-default","data-delta":"1"}}]][[{"fid":"1623","view_mode":"default","fields":{"format":"default","field_file_image_alt_text[und][0][value]":"Logo Bundesministerium für wirtschaftliche Zusammenarbeit und Entwicklung","field_file_image_title_text[und][0][value]":"Logo Bundesministerium für wirtschaftliche Zusammenarbeit und Entwicklung"},"type":"media","field_deltas":{"1":{"format":"default","field_file_image_alt_text[und][0][value]":"Logo Bundesministerium für wirtschaftliche Zusammenarbeit und Entwicklung","field_file_image_title_text[und][0][value]":"Logo Bundesministerium für wirtschaftliche Zusammenarbeit und Entwicklung"}},"link_text":null,"attributes":{"alt":"Logo Bundesministerium für wirtschaftliche Zusammenarbeit und Entwicklung","title":"Logo Bundesministerium für wirtschaftliche Zusammenarbeit und Entwicklung","height":112,"width":250,"style":"width: 125px; height: 56px; float: left;","class":"media-element colorbox file-default","data-delta":"1"}}]]&nbsp;[[{"fid":"1626","view_mode":"default","fields":{"format":"default","field_file_image_alt_text[und][0][value]":"Logo Landesstelle für Entwicklungszusammenarbeit","field_file_image_title_text[und][0][value]":"Logo Landesstelle für Entwicklungszusammenarbeit"},"type":"media","field_deltas":{"1":{"format":"default","field_file_image_alt_text[und][0][value]":"Logo Landesstelle für Entwicklungszusammenarbeit","field_file_image_title_text[und][0][value]":"Logo Landesstelle für Entwicklungszusammenarbeit"}},"link_text":null,"attributes":{"alt":"Logo Landesstelle für Entwicklungszusammenarbeit","title":"Logo Landesstelle für Entwicklungszusammenarbeit","height":112,"width":482,"style":"width: 241px; height: 56px; float: left;","class":"media-element colorbox file-default","data-delta":"1"}}]]</p></div>',
    'format' => 'full_html',
    'name' => 'finanzhinweis_brot_eed_nsb',
    'content_types' => array(
      'product_display' => 'Produktansicht',
    ),
  );
  return $templates;
}
