<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

/**
 * The event source entry
 */
class EventTypeEntry extends Model {
    protected $_name = [
        'name' => 'Name',
        'eventSourceName' => 'EventSourceName',
        'shortName' => 'ShortName',
        'groupName' => 'GroupName',
    ];
    public function validate() {
        Model::validateRequired('name', $this->name, true);
        Model::validateRequired('eventSourceName', $this->eventSourceName, true);
        Model::validateRequired('shortName', $this->shortName, true);
        Model::validateRequired('groupName', $this->groupName, true);
    }
    public function toMap() {
        $res = [];
        if (null !== $this->name) {
            $res['Name'] = $this->name;
        }
        if (null !== $this->eventSourceName) {
            $res['EventSourceName'] = $this->eventSourceName;
        }
        if (null !== $this->shortName) {
            $res['ShortName'] = $this->shortName;
        }
        if (null !== $this->groupName) {
            $res['GroupName'] = $this->groupName;
        }
        return $res;
    }
    /**
     * @param array $map
     * @return EventTypeEntry
     */
    public static function fromMap($map = []) {
        $model = new self();
        if(isset($map['Name'])){
            $model->name = $map['Name'];
        }
        if(isset($map['EventSourceName'])){
            $model->eventSourceName = $map['EventSourceName'];
        }
        if(isset($map['ShortName'])){
            $model->shortName = $map['ShortName'];
        }
        if(isset($map['GroupName'])){
            $model->groupName = $map['GroupName'];
        }
        return $model;
    }
    /**
     * @var string
     */
    public $name;

    /**
     * @var string
     */
    public $eventSourceName;

    /**
     * @var string
     */
    public $shortName;

    /**
     * @var string
     */
    public $groupName;

}
