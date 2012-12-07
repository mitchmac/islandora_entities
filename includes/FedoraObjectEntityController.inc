<?php

class FedoraObjectEntityController extends EntityAPIController {

  public function __construct($entity_type) {
    parent::__construct($entity_type);
  }

  public function load($ids = array(), $conditions = array()) {
    $entities = array();

    foreach ($ids AS $id) {
      $fedora_object = islandora_object_load($id);
      $entities[$id] = $fedora_object;
    }

    return $entities;
  }

  public function query($ids, $conditions, $revision_id = FALSE) {
    $entities = array();

    foreach ($ids as $id) {
      $entity = islandora_object_load($id);
      $entities[$id] = $entity;
    }
    return $entities;
  }

  public function buildContent($entity, $view_mode = 'full', $langcode = NULL, $content = array()) {
    return parent::buildContent($entity, $view_mode, $langcode, $content);
  }
}