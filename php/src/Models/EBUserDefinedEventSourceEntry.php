<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

use AlibabaCloud\SDK\EventBridge\Models\SourceRabbitMQParameters;
use AlibabaCloud\SDK\EventBridge\Models\SourceMNSParameters;
use AlibabaCloud\SDK\EventBridge\Models\SourceRocketMQParameters;
use AlibabaCloud\SDK\EventBridge\Models\SourceKafkaParameters;
use AlibabaCloud\SDK\EventBridge\Models\SourceHttpEventResponse;

/**
 * The event source entry
 */
class EBUserDefinedEventSourceEntry extends Model {
    protected $_name = [
        'name' => 'Name',
        'description' => 'Description',
        'arn' => 'ARN',
        'status' => 'Status',
        'ctime' => 'Ctime',
        'eventBusName' => 'EventBusName',
        'sourceRabbitMQParameters' => 'SourceRabbitMQParameters',
        'sourceMNSParameters' => 'SourceMNSParameters',
        'sourceRocketMQParameters' => 'SourceRocketMQParameters',
        'sourceKafkaParameters' => 'SourceKafkaParameters',
        'sourceHttpEventResponse' => 'SourceHttpEventResponse',
    ];
    public function validate() {
        Model::validateRequired('sourceRocketMQParameters', $this->sourceRocketMQParameters, true);
        Model::validateRequired('sourceKafkaParameters', $this->sourceKafkaParameters, true);
        Model::validateRequired('sourceHttpEventResponse', $this->sourceHttpEventResponse, true);
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
        if (null !== $this->sourceRabbitMQParameters) {
            $res['SourceRabbitMQParameters'] = null !== $this->sourceRabbitMQParameters ? $this->sourceRabbitMQParameters->toMap() : null;
        }
        if (null !== $this->sourceMNSParameters) {
            $res['SourceMNSParameters'] = null !== $this->sourceMNSParameters ? $this->sourceMNSParameters->toMap() : null;
        }
        if (null !== $this->sourceRocketMQParameters) {
            $res['SourceRocketMQParameters'] = null !== $this->sourceRocketMQParameters ? $this->sourceRocketMQParameters->toMap() : null;
        }
        if (null !== $this->sourceKafkaParameters) {
            $res['SourceKafkaParameters'] = null !== $this->sourceKafkaParameters ? $this->sourceKafkaParameters->toMap() : null;
        }
        if (null !== $this->sourceHttpEventResponse) {
            $res['SourceHttpEventResponse'] = null !== $this->sourceHttpEventResponse ? $this->sourceHttpEventResponse->toMap() : null;
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
        if(isset($map['Status'])){
            $model->status = $map['Status'];
        }
        if(isset($map['Ctime'])){
            $model->ctime = $map['Ctime'];
        }
        if(isset($map['EventBusName'])){
            $model->eventBusName = $map['EventBusName'];
        }
        if(isset($map['SourceRabbitMQParameters'])){
            $model->sourceRabbitMQParameters = SourceRabbitMQParameters::fromMap($map['SourceRabbitMQParameters']);
        }
        if(isset($map['SourceMNSParameters'])){
            $model->sourceMNSParameters = SourceMNSParameters::fromMap($map['SourceMNSParameters']);
        }
        if(isset($map['SourceRocketMQParameters'])){
            $model->sourceRocketMQParameters = SourceRocketMQParameters::fromMap($map['SourceRocketMQParameters']);
        }
        if(isset($map['SourceKafkaParameters'])){
            $model->sourceKafkaParameters = SourceKafkaParameters::fromMap($map['SourceKafkaParameters']);
        }
        if(isset($map['SourceHttpEventResponse'])){
            $model->sourceHttpEventResponse = SourceHttpEventResponse::fromMap($map['SourceHttpEventResponse']);
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
     * @var SourceRabbitMQParameters
     */
    public $sourceRabbitMQParameters;

    /**
     * @var SourceMNSParameters
     */
    public $sourceMNSParameters;

    /**
     * @var SourceRocketMQParameters
     */
    public $sourceRocketMQParameters;

    /**
     * @var SourceKafkaParameters
     */
    public $sourceKafkaParameters;

    /**
     * @var SourceHttpEventResponse
     */
    public $sourceHttpEventResponse;

}
