<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

/**
 * The metrics of event streaming
 */
class EventStreamingMetric extends Model {
    protected $_name = [
        'name' => 'Name',
        'tps' => 'TPS',
        'delayTime' => 'DelayTime',
        'diffOffset' => 'DiffOffset',
        'lastDateSyncTime' => 'LastDateSyncTime',
        'lastHeartBeat' => 'LastHeartBeat',
        'status' => 'Status',
    ];
    public function validate() {}
    public function toMap() {
        $res = [];
        if (null !== $this->name) {
            $res['Name'] = $this->name;
        }
        if (null !== $this->tps) {
            $res['TPS'] = $this->tps;
        }
        if (null !== $this->delayTime) {
            $res['DelayTime'] = $this->delayTime;
        }
        if (null !== $this->diffOffset) {
            $res['DiffOffset'] = $this->diffOffset;
        }
        if (null !== $this->lastDateSyncTime) {
            $res['LastDateSyncTime'] = $this->lastDateSyncTime;
        }
        if (null !== $this->lastHeartBeat) {
            $res['LastHeartBeat'] = $this->lastHeartBeat;
        }
        if (null !== $this->status) {
            $res['Status'] = $this->status;
        }
        return $res;
    }
    /**
     * @param array $map
     * @return EventStreamingMetric
     */
    public static function fromMap($map = []) {
        $model = new self();
        if(isset($map['Name'])){
            $model->name = $map['Name'];
        }
        if(isset($map['TPS'])){
            $model->tps = $map['TPS'];
        }
        if(isset($map['DelayTime'])){
            $model->delayTime = $map['DelayTime'];
        }
        if(isset($map['DiffOffset'])){
            $model->diffOffset = $map['DiffOffset'];
        }
        if(isset($map['LastDateSyncTime'])){
            $model->lastDateSyncTime = $map['LastDateSyncTime'];
        }
        if(isset($map['LastHeartBeat'])){
            $model->lastHeartBeat = $map['LastHeartBeat'];
        }
        if(isset($map['Status'])){
            $model->status = $map['Status'];
        }
        return $model;
    }
    /**
     * @var string
     */
    public $name;

    /**
     * @var float
     */
    public $tps;

    /**
     * @var int
     */
    public $delayTime;

    /**
     * @var int
     */
    public $diffOffset;

    /**
     * @var int
     */
    public $lastDateSyncTime;

    /**
     * @var int
     */
    public $lastHeartBeat;

    /**
     * @var string
     */
    public $status;

}
