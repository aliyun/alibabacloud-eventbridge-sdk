<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

use AlibabaCloud\SDK\EventBridge\Models\TargetEntry;

/**
 * The request of Save and start event streaming procss
 */
class SaveAndStartEventStreamingRequest extends Model {
    protected $_name = [
        'name' => 'Name',
        'description' => 'Description',
        'EBEventSourceEntry' => 'EBEventSourceEntry',
        'filterPattern' => 'FilterPattern',
        'targets' => 'Targets',
    ];
    public function validate() {
        Model::validateRequired('name', $this->name, true);
        Model::validateRequired('targets', $this->targets, true);
    }
    public function toMap() {
        $res = [];
        if (null !== $this->name) {
            $res['Name'] = $this->name;
        }
        if (null !== $this->description) {
            $res['Description'] = $this->description;
        }
        if (null !== $this->EBEventSourceEntry) {
            $res['EBEventSourceEntry'] = $this->EBEventSourceEntry;
        }
        if (null !== $this->filterPattern) {
            $res['FilterPattern'] = $this->filterPattern;
        }
        if (null !== $this->targets) {
            $res['Targets'] = [];
            if(null !== $this->targets && is_array($this->targets)){
                $n = 0;
                foreach($this->targets as $item){
                    $res['Targets'][$n++] = null !== $item ? $item->toMap() : $item;
                }
            }
        }
        return $res;
    }
    /**
     * @param array $map
     * @return SaveAndStartEventStreamingRequest
     */
    public static function fromMap($map = []) {
        $model = new self();
        if(isset($map['Name'])){
            $model->name = $map['Name'];
        }
        if(isset($map['Description'])){
            $model->description = $map['Description'];
        }
        if(isset($map['EBEventSourceEntry'])){
            $model->EBEventSourceEntry = $map['EBEventSourceEntry'];
        }
        if(isset($map['FilterPattern'])){
            $model->filterPattern = $map['FilterPattern'];
        }
        if(isset($map['Targets'])){
            if(!empty($map['Targets'])){
                $model->targets = [];
                $n = 0;
                foreach($map['Targets'] as $item) {
                    $model->targets[$n++] = null !== $item ? TargetEntry::fromMap($item) : $item;
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
    public $EBEventSourceEntry;

    /**
     * @var string
     */
    public $filterPattern;

    /**
     * @var TargetEntry[]
     */
    public $targets;

}
