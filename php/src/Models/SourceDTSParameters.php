<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

/**
 * The detail of SourceDTSParameters
 */
class SourceDTSParameters extends Model {
    protected $_name = [
        'regionId' => 'RegionId',
        'brokerUrl' => 'BrokerUrl',
        'topic' => 'Topic',
        'sid' => 'Sid',
        'username' => 'Username',
        'password' => 'Password',
        'initCheckPoint' => 'InitCheckPoint',
        'taskId' => 'TaskId',
    ];
    public function validate() {
        Model::validateRequired('brokerUrl', $this->brokerUrl, true);
        Model::validateRequired('topic', $this->topic, true);
        Model::validateRequired('sid', $this->sid, true);
        Model::validateRequired('username', $this->username, true);
        Model::validateRequired('password', $this->password, true);
        Model::validateRequired('initCheckPoint', $this->initCheckPoint, true);
        Model::validateRequired('taskId', $this->taskId, true);
    }
    public function toMap() {
        $res = [];
        if (null !== $this->regionId) {
            $res['RegionId'] = $this->regionId;
        }
        if (null !== $this->brokerUrl) {
            $res['BrokerUrl'] = $this->brokerUrl;
        }
        if (null !== $this->topic) {
            $res['Topic'] = $this->topic;
        }
        if (null !== $this->sid) {
            $res['Sid'] = $this->sid;
        }
        if (null !== $this->username) {
            $res['Username'] = $this->username;
        }
        if (null !== $this->password) {
            $res['Password'] = $this->password;
        }
        if (null !== $this->initCheckPoint) {
            $res['InitCheckPoint'] = $this->initCheckPoint;
        }
        if (null !== $this->taskId) {
            $res['TaskId'] = $this->taskId;
        }
        return $res;
    }
    /**
     * @param array $map
     * @return SourceDTSParameters
     */
    public static function fromMap($map = []) {
        $model = new self();
        if(isset($map['RegionId'])){
            $model->regionId = $map['RegionId'];
        }
        if(isset($map['BrokerUrl'])){
            $model->brokerUrl = $map['BrokerUrl'];
        }
        if(isset($map['Topic'])){
            $model->topic = $map['Topic'];
        }
        if(isset($map['Sid'])){
            $model->sid = $map['Sid'];
        }
        if(isset($map['Username'])){
            $model->username = $map['Username'];
        }
        if(isset($map['Password'])){
            $model->password = $map['Password'];
        }
        if(isset($map['InitCheckPoint'])){
            $model->initCheckPoint = $map['InitCheckPoint'];
        }
        if(isset($map['TaskId'])){
            $model->taskId = $map['TaskId'];
        }
        return $model;
    }
    /**
     * @var string
     */
    public $regionId;

    /**
     * @var string
     */
    public $brokerUrl;

    /**
     * @var string
     */
    public $topic;

    /**
     * @var string
     */
    public $sid;

    /**
     * @var string
     */
    public $username;

    /**
     * @var string
     */
    public $password;

    /**
     * @var int
     */
    public $initCheckPoint;

    /**
     * @var string
     */
    public $taskId;

}
