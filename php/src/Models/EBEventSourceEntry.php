<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

/**
 * The eventsource of event streaming
 */
class EBEventSourceEntry extends Model {
    protected $_name = [
        'name' => 'Name',
        'New' => 'IsNew',
        'description' => 'Description',
        'externalSourceType' => 'ExternalSourceType',
        'externalSourceConfig' => 'ExternalSourceConfig',
    ];
    public function validate() {
        Model::validateRequired('name', $this->name, true);
        Model::validateRequired('New', $this->New, true);
        Model::validateRequired('description', $this->description, true);
        Model::validateRequired('externalSourceType', $this->externalSourceType, true);
        Model::validateRequired('externalSourceConfig', $this->externalSourceConfig, true);
    }
    public function toMap() {
        $res = [];
        if (null !== $this->name) {
            $res['Name'] = $this->name;
        }
        if (null !== $this->New) {
            $res['IsNew'] = $this->New;
        }
        if (null !== $this->description) {
            $res['Description'] = $this->description;
        }
        if (null !== $this->externalSourceType) {
            $res['ExternalSourceType'] = $this->externalSourceType;
        }
        if (null !== $this->externalSourceConfig) {
            $res['ExternalSourceConfig'] = $this->externalSourceConfig;
        }
        return $res;
    }
    /**
     * @param array $map
     * @return EBEventSourceEntry
     */
    public static function fromMap($map = []) {
        $model = new self();
        if(isset($map['Name'])){
            $model->name = $map['Name'];
        }
        if(isset($map['IsNew'])){
            $model->New = $map['IsNew'];
        }
        if(isset($map['Description'])){
            $model->description = $map['Description'];
        }
        if(isset($map['ExternalSourceType'])){
            $model->externalSourceType = $map['ExternalSourceType'];
        }
        if(isset($map['ExternalSourceConfig'])){
            $model->externalSourceConfig = $map['ExternalSourceConfig'];
        }
        return $model;
    }
    /**
     * @var string
     */
    public $name;

    /**
     * @var bool
     */
    public $New;

    /**
     * @var string
     */
    public $description;

    /**
     * @var string
     */
    public $externalSourceType;

    /**
     * @var mixed[]
     */
    public $externalSourceConfig;

}
