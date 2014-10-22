<?php
/**
 * @file
 * ulc_events.features.inc
 */

/**
 * Implements hook_views_api().
 */
function ulc_events_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ulc_events_node_info() {
  $items = array(
    'event_calendar' => array(
      'name' => t('New Event'),
      'base' => 'node_content',
      'description' => t('A content type to create events for the events calendar.'),
      'has_title' => '1',
      'title_label' => t('Event Title'),
      'help' => '',
    ),
  );
  return $items;
}
