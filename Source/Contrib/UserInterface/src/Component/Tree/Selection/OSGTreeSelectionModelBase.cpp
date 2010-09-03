/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com)                             *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class TreeSelectionModel!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGTreeSelectionModelBase.h"
#include "OSGTreeSelectionModel.h"

#include <boost/bind.hpp>

#include "OSGEventDetails.h"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::TreeSelectionModel
    A UI TreeModel.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<TreeSelectionModel *>::_type("TreeSelectionModelPtr", "AttachmentContainerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(TreeSelectionModel *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           TreeSelectionModel *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           TreeSelectionModel *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void TreeSelectionModelBase::classDescInserter(TypeObject &oType)
{
}


TreeSelectionModelBase::TypeObject TreeSelectionModelBase::_type(
    TreeSelectionModelBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    NULL,
    TreeSelectionModel::initMethod,
    TreeSelectionModel::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&TreeSelectionModel::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"TreeSelectionModel\"\n"
    "\tparent=\"AttachmentContainer\"\n"
    "    library=\"ContribUserInterface\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "\tstructure=\"abstract\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    ">\n"
    "A UI TreeModel.\n"
    "\t<ProducedEvent\n"
    "\t\tname=\"SelectionAdded\"\n"
    "\t\tdetailsType=\"TreeSelectionEventDetails\"\n"
    "\t\tconsumable=\"true\"\n"
    "\t>\n"
    "\t</ProducedEvent>\n"
    "\t<ProducedEvent\n"
    "\t\tname=\"SelectionRemoved\"\n"
    "\t\tdetailsType=\"TreeSelectionEventDetails\"\n"
    "\t\tconsumable=\"true\"\n"
    "\t>\n"
    "\t</ProducedEvent>\n"
    "</FieldContainer>\n",
    "A UI TreeModel.\n"
    );

//! TreeSelectionModel Produced Events

EventDescription *TreeSelectionModelBase::_eventDesc[] =
{
    new EventDescription("SelectionAdded", 
                          "",
                          SelectionAddedEventId, 
                          FieldTraits<TreeSelectionEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&TreeSelectionModelBase::getHandleSelectionAddedSignal)),

    new EventDescription("SelectionRemoved", 
                          "",
                          SelectionRemovedEventId, 
                          FieldTraits<TreeSelectionEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&TreeSelectionModelBase::getHandleSelectionRemovedSignal))

};

EventProducerType TreeSelectionModelBase::_producerType(
    "TreeSelectionModelProducerType",
    "EventProducerType",
    "",
    InitEventProducerFunctor(),
    _eventDesc,
    sizeof(_eventDesc));

/*------------------------------ get -----------------------------------*/

FieldContainerType &TreeSelectionModelBase::getType(void)
{
    return _type;
}

const FieldContainerType &TreeSelectionModelBase::getType(void) const
{
    return _type;
}

const EventProducerType &TreeSelectionModelBase::getProducerType(void) const
{
    return _producerType;
}

UInt32 TreeSelectionModelBase::getContainerSize(void) const
{
    return sizeof(TreeSelectionModel);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 TreeSelectionModelBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void TreeSelectionModelBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void TreeSelectionModelBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}



/*------------------------- event producers ----------------------------------*/
void TreeSelectionModelBase::produceEvent(UInt32 eventId, EventDetails* const e)
{
    switch(eventId)
    {
    case SelectionAddedEventId:
        OSG_ASSERT(dynamic_cast<SelectionAddedEventDetailsType* const>(e));

        _SelectionAddedEvent.set_combiner(ConsumableEventCombiner(e));
        _SelectionAddedEvent(dynamic_cast<SelectionAddedEventDetailsType* const>(e), SelectionAddedEventId);
        break;
    case SelectionRemovedEventId:
        OSG_ASSERT(dynamic_cast<SelectionRemovedEventDetailsType* const>(e));

        _SelectionRemovedEvent.set_combiner(ConsumableEventCombiner(e));
        _SelectionRemovedEvent(dynamic_cast<SelectionRemovedEventDetailsType* const>(e), SelectionRemovedEventId);
        break;
    default:
        SWARNING << "No event defined with that ID";
        break;
    }
}

boost::signals2::connection TreeSelectionModelBase::connectEvent(UInt32 eventId, 
                                                             const BaseEventType::slot_type &listener, 
                                                             boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case SelectionAddedEventId:
        return _SelectionAddedEvent.connect(listener, at);
        break;
    case SelectionRemovedEventId:
        return _SelectionRemovedEvent.connect(listener, at);
        break;
    default:
        SWARNING << "No event defined with that ID";
        return boost::signals2::connection();
        break;
    }

    return boost::signals2::connection();
}

boost::signals2::connection  TreeSelectionModelBase::connectEvent(UInt32 eventId, 
                                                              const BaseEventType::group_type &group,
                                                              const BaseEventType::slot_type &listener,
                                                              boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case SelectionAddedEventId:
        return _SelectionAddedEvent.connect(group, listener, at);
        break;
    case SelectionRemovedEventId:
        return _SelectionRemovedEvent.connect(group, listener, at);
        break;
    default:
        SWARNING << "No event defined with that ID";
        return boost::signals2::connection();
        break;
    }

    return boost::signals2::connection();
}
    
void  TreeSelectionModelBase::disconnectEvent(UInt32 eventId, const BaseEventType::group_type &group)
{
    switch(eventId)
    {
    case SelectionAddedEventId:
        _SelectionAddedEvent.disconnect(group);
        break;
    case SelectionRemovedEventId:
        _SelectionRemovedEvent.disconnect(group);
        break;
    default:
        SWARNING << "No event defined with that ID";
        break;
    }
}

void  TreeSelectionModelBase::disconnectAllSlotsEvent(UInt32 eventId)
{
    switch(eventId)
    {
    case SelectionAddedEventId:
        _SelectionAddedEvent.disconnect_all_slots();
        break;
    case SelectionRemovedEventId:
        _SelectionRemovedEvent.disconnect_all_slots();
        break;
    default:
        SWARNING << "No event defined with that ID";
        break;
    }
}

bool  TreeSelectionModelBase::isEmptyEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case SelectionAddedEventId:
        return _SelectionAddedEvent.empty();
        break;
    case SelectionRemovedEventId:
        return _SelectionRemovedEvent.empty();
        break;
    default:
        SWARNING << "No event defined with that ID";
        return true;
        break;
    }
}

UInt32  TreeSelectionModelBase::numSlotsEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case SelectionAddedEventId:
        return _SelectionAddedEvent.num_slots();
        break;
    case SelectionRemovedEventId:
        return _SelectionRemovedEvent.num_slots();
        break;
    default:
        SWARNING << "No event defined with that ID";
        return 0;
        break;
    }
}


/*------------------------- constructors ----------------------------------*/

TreeSelectionModelBase::TreeSelectionModelBase(void) :
    Inherited()
{
}

TreeSelectionModelBase::TreeSelectionModelBase(const TreeSelectionModelBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

TreeSelectionModelBase::~TreeSelectionModelBase(void)
{
}



GetEventHandlePtr TreeSelectionModelBase::getHandleSelectionAddedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<SelectionAddedEventType>(
             const_cast<SelectionAddedEventType *>(&_SelectionAddedEvent),
             _producerType.getEventDescription(SelectionAddedEventId),
             const_cast<TreeSelectionModelBase *>(this)));

    return returnValue;
}

GetEventHandlePtr TreeSelectionModelBase::getHandleSelectionRemovedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<SelectionRemovedEventType>(
             const_cast<SelectionRemovedEventType *>(&_SelectionRemovedEvent),
             _producerType.getEventDescription(SelectionRemovedEventId),
             const_cast<TreeSelectionModelBase *>(this)));

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void TreeSelectionModelBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    TreeSelectionModel *pThis = static_cast<TreeSelectionModel *>(this);

    pThis->execSync(static_cast<TreeSelectionModel *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif



void TreeSelectionModelBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE