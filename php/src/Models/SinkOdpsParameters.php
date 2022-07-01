<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

use AlibabaCloud\SDK\EventBridge\Models\TargetParameter;

/**
 * The config of SinkOdpsParameters
 */
class SinkOdpsParameters extends Model {
    protected $_name = [
        'project' => 'Project',
        'table' => 'Table',
        'roleName' => 'RoleName',
        'format' => 'Format',
        'mode' => 'Mode',
        'partitionWindowType' => 'PartitionWindowType',
        'timeZone' => 'TimeZone',
        'useStreaming' => 'UseStreaming',
        'extendConfig' => 'ExtendConfig',
    ];
    public function validate() {}
    public function toMap() {
        $res = [];
        if (null !== $this->project) {
            $res['Project'] = null !== $this->project ? $this->project->toMap() : null;
        }
        if (null !== $this->table) {
            $res['Table'] = null !== $this->table ? $this->table->toMap() : null;
        }
        if (null !== $this->roleName) {
            $res['RoleName'] = null !== $this->roleName ? $this->roleName->toMap() : null;
        }
        if (null !== $this->format) {
            $res['Format'] = null !== $this->format ? $this->format->toMap() : null;
        }
        if (null !== $this->mode) {
            $res['Mode'] = null !== $this->mode ? $this->mode->toMap() : null;
        }
        if (null !== $this->partitionWindowType) {
            $res['PartitionWindowType'] = null !== $this->partitionWindowType ? $this->partitionWindowType->toMap() : null;
        }
        if (null !== $this->timeZone) {
            $res['TimeZone'] = null !== $this->timeZone ? $this->timeZone->toMap() : null;
        }
        if (null !== $this->useStreaming) {
            $res['UseStreaming'] = null !== $this->useStreaming ? $this->useStreaming->toMap() : null;
        }
        if (null !== $this->extendConfig) {
            $res['ExtendConfig'] = $this->extendConfig;
        }
        return $res;
    }
    /**
     * @param array $map
     * @return SinkOdpsParameters
     */
    public static function fromMap($map = []) {
        $model = new self();
        if(isset($map['Project'])){
            $model->project = TargetParameter::fromMap($map['Project']);
        }
        if(isset($map['Table'])){
            $model->table = TargetParameter::fromMap($map['Table']);
        }
        if(isset($map['RoleName'])){
            $model->roleName = TargetParameter::fromMap($map['RoleName']);
        }
        if(isset($map['Format'])){
            $model->format = TargetParameter::fromMap($map['Format']);
        }
        if(isset($map['Mode'])){
            $model->mode = TargetParameter::fromMap($map['Mode']);
        }
        if(isset($map['PartitionWindowType'])){
            $model->partitionWindowType = TargetParameter::fromMap($map['PartitionWindowType']);
        }
        if(isset($map['TimeZone'])){
            $model->timeZone = TargetParameter::fromMap($map['TimeZone']);
        }
        if(isset($map['UseStreaming'])){
            $model->useStreaming = TargetParameter::fromMap($map['UseStreaming']);
        }
        if(isset($map['ExtendConfig'])){
            $model->extendConfig = $map['ExtendConfig'];
        }
        return $model;
    }
    /**
     * @var TargetParameter
     */
    public $project;

    /**
     * @var TargetParameter
     */
    public $table;

    /**
     * @var TargetParameter
     */
    public $roleName;

    /**
     * @var TargetParameter
     */
    public $format;

    /**
     * @var TargetParameter
     */
    public $mode;

    /**
     * @var TargetParameter
     */
    public $partitionWindowType;

    /**
     * @var TargetParameter
     */
    public $timeZone;

    /**
     * @var TargetParameter
     */
    public $useStreaming;

    /**
     * @var mixed[]
     */
    public $extendConfig;

}
