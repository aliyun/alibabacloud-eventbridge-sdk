<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

use AlibabaCloud\SDK\EventBridge\Models\EventTypeEntry;

/**
 * The event source entry
 */
class EBAliyunOfficialEventSourceEntry extends Model {
    protected $_name = [
        'name' => 'Name',
        'description' => 'Description',
        'arn' => 'ARN',
        'status' => 'Status',
        'ctime' => 'Ctime',
        'eventBusName' => 'EventBusName',
        'eventTypes' => 'EventTypes',
    ];
    public function validate() {
        Model::validateRequired('name', $this->name, true);
        Model::validateRequired('description', $this->description, true);
        Model::validateRequired('arn', $this->arn, true);
        Model::validateRequired('status', $this->status, true);
        Model::validateRequired('ctime', $this->ctime, true);
        Model::validateRequired('eventBusName', $this->eventBusName, true);
        Model::validateRequired('eventTypes', $this->eventTypes, true);
    }
    public function toMap() {
        $res = [];
        if (null !== $this->name) {
            $res['Name'] = $this->name;
        }
        if (null !== $this->description) {
            $res['Description'] = $this->description;
        }
        if (null !== $this->arn) {
            $res['ARN'] = $this->arn;
        }
        if (null !== $this->status) {
            $res['Status'] = $this->status;
        }
        if (null !== $this->ctime) {
            $res['Ctime'] = $this->ctime;
        }
        if (null !== $this->eventBusName) {
            $res['EventBusName'] = $this->eventBusName;
        }
        if (null !== $this->eventTypes) {
            $res['EventTypes'] = [];
            if(null !== $this->eventTypes && is_array($this->eventTypes)){
                $n = 0;
                foreach($this->eventTypes as $item){
                    $res['EventTypes'][$n++] = null !== $item ? $item->toMap() : $item;
                }
            }
        }
        return $res;
    }
    /**
     * @param array $map
     * @return EBAliyunOfficialEventSourceEntry
     */
    public static function fromMap($map = []) {
        $model = new self();
        if(isset($map['Name'])){
            $model->name = $map['Name'];
        }
        if(isset($map['Description'])){
            $model->description = $map['Description'];
        }
        if(isset($map['ARN'])){
            $model->arn = $map['ARN'];
        }
        if(isset($map['Status'])){
            $model->status = $map['Status'];
        }
        if(isset($map['Ctime'])){
            $model->ctime = $map['Ctime'];
        }
        if(isset($map['EventBusName'])){
            $model->eventBusName = $map['EventBusName'];
        }
        if(isset($map['EventTypes'])){
            if(!empty($map['EventTypes'])){
                $model->eventTypes = [];
                $n = 0;
                foreach($map['EventTypes'] as $item) {
                    $model->eventTypes[$n++] = null !== $item ? EventTypeEntry::fromMap($item) : $item;
                }
            }
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
    public $description;

    /**
     * @var string
     */
    public $arn;

    /**
     * @var string
     */
    public $status;

    /**
     * @var int
     */
    public $ctime;

    /**
     * @var string
     */
    public $eventBusName;

    /**
     * @var EventTypeEntry[]
     */
    public $eventTypes;

}
