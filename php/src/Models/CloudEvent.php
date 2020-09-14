<?php

// This file is auto-generated, don't edit it. Thanks.

namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

/**
 * Cloud Event Stanard Froamt.
 */
class CloudEvent extends Model
{
    /**
     * @var string
     */
    public $id;

    /**
     * @var string
     */
    public $source;

    /**
     * @var string
     */
    public $specversion;

    /**
     * @var string
     */
    public $type;

    /**
     * @var string
     */
    public $datacontenttype;

    /**
     * @var string
     */
    public $dataschema;

    /**
     * @var string
     */
    public $subject;

    /**
     * @var string
     */
    public $time;

    /**
     * @var mixed[]
     */
    public $extensions;

    /**
     * @var int[]
     */
    public $data;
    protected $_name = [
        'id'              => 'id',
        'source'          => 'source',
        'specversion'     => 'specversion',
        'type'            => 'type',
        'datacontenttype' => 'datacontenttype',
        'dataschema'      => 'dataschema',
        'subject'         => 'subject',
        'time'            => 'time',
        'extensions'      => 'extensions',
        'data'            => 'data',
    ];

    public function validate()
    {
        Model::validateRequired('id', $this->id, true);
        Model::validateRequired('source', $this->source, true);
        Model::validateRequired('specversion', $this->specversion, true);
        Model::validateRequired('type', $this->type, true);
        Model::validateRequired('extensions', $this->extensions, true);
        Model::validateMaxLength('source', $this->source, 128);
        Model::validateMaxLength('type', $this->type, 64);
        Model::validateMaxLength('time', $this->time, 64);
        Model::validatePattern('time', $this->time, '[0-9]{4}-[0-9]{2}-[0-9]{2}T[0-9]{2}:[0-9]{2}:[0-9]{2}.[0-9]{3}[\\s\\S]*');
    }

    public function toMap()
    {
        $res = [];
        if (null !== $this->id) {
            $res['id'] = $this->id;
        }
        if (null !== $this->source) {
            $res['source'] = $this->source;
        }
        if (null !== $this->specversion) {
            $res['specversion'] = $this->specversion;
        }
        if (null !== $this->type) {
            $res['type'] = $this->type;
        }
        if (null !== $this->datacontenttype) {
            $res['datacontenttype'] = $this->datacontenttype;
        }
        if (null !== $this->dataschema) {
            $res['dataschema'] = $this->dataschema;
        }
        if (null !== $this->subject) {
            $res['subject'] = $this->subject;
        }
        if (null !== $this->time) {
            $res['time'] = $this->time;
        }
        if (null !== $this->extensions) {
            $res['extensions'] = $this->extensions;
        }
        if (null !== $this->data) {
            $res['data'] = $this->data;
        }

        return $res;
    }

    /**
     * @param array $map
     *
     * @return CloudEvent
     */
    public static function fromMap($map = [])
    {
        $model = new self();
        if (isset($map['id'])) {
            $model->id = $map['id'];
        }
        if (isset($map['source'])) {
            $model->source = $map['source'];
        }
        if (isset($map['specversion'])) {
            $model->specversion = $map['specversion'];
        }
        if (isset($map['type'])) {
            $model->type = $map['type'];
        }
        if (isset($map['datacontenttype'])) {
            $model->datacontenttype = $map['datacontenttype'];
        }
        if (isset($map['dataschema'])) {
            $model->dataschema = $map['dataschema'];
        }
        if (isset($map['subject'])) {
            $model->subject = $map['subject'];
        }
        if (isset($map['time'])) {
            $model->time = $map['time'];
        }
        if (isset($map['extensions'])) {
            $model->extensions = $map['extensions'];
        }
        if (isset($map['data'])) {
            $model->data = $map['data'];
        }

        return $model;
    }
}
