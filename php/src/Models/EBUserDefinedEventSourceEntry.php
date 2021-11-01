<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

/**
 * The event source entry
 */
class EBUserDefinedEventSourceEntry extends Model {
    protected $_name = [
        'name' => 'Name',
        'description' => 'Description',
        'arn' => 'ARN',
        'externalSourceType' => 'ExternalSourceType',
        'externalSourceConfig' => 'ExternalSourceConfig',
        'status' => 'Status',
        'ctime' => 'Ctime',
        'attachedBuses' => 'AttachedBuses',
    ];
    public function validate() {
        Model::validateRequired('name', $this->name, true);
        Model::validateRequired('description', $this->description, true);
        Model::validateRequired('arn', $this->arn, true);
        Model::validateRequired('externalSourceType', $this->externalSourceType, true);
        Model::validateRequired('externalSourceConfig', $this->externalSourceConfig, true);
        Model::validateRequired('status', $this->status, true);
        Model::validateRequired('ctime', $this->ctime, true);
        Model::validateRequired('attachedBuses', $this->attachedBuses, true);
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
        if (null !== $this->externalSourceType) {
            $res['ExternalSourceType'] = $this->externalSourceType;
        }
        if (null !== $this->externalSourceConfig) {
            $res['ExternalSourceConfig'] = $this->externalSourceConfig;
        }
        if (null !== $this->status) {
            $res['Status'] = $this->status;
        }
        if (null !== $this->ctime) {
            $res['Ctime'] = $this->ctime;
        }
        if (null !== $this->attachedBuses) {
            $res['AttachedBuses'] = $this->attachedBuses;
        }
        return $res;
    }
    /**
     * @param array $map
     * @return EBUserDefinedEventSourceEntry
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
        if(isset($map['ExternalSourceType'])){
            $model->externalSourceType = $map['ExternalSourceType'];
        }
        if(isset($map['ExternalSourceConfig'])){
            $model->externalSourceConfig = $map['ExternalSourceConfig'];
        }
        if(isset($map['Status'])){
            $model->status = $map['Status'];
        }
        if(isset($map['Ctime'])){
            $model->ctime = $map['Ctime'];
        }
        if(isset($map['AttachedBuses'])){
            if(!empty($map['AttachedBuses'])){
                $model->attachedBuses = $map['AttachedBuses'];
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
    public $externalSourceType;

    /**
     * @var mixed[]
     */
    public $externalSourceConfig;

    /**
     * @var string
     */
    public $status;

    /**
     * @var int
     */
    public $ctime;

    /**
     * @var string[]
     */
    public $attachedBuses;

}
