#ifndef __DOCUMENT_HPP__
#define __DOCUMENT_HPP__

#include <vector>
#include "Style.hpp"
#include "Component.hpp"

class XmlReader;

class Document : public Component
{
public:
    Document(Component* parent, XmlReader& reader);
    virtual ~Document();

    void parse(XmlReader& reader);

    virtual void resize(float width, float height);
    virtual void draw(Painter& painter);
    virtual void event(Event& event);

    Style style;
    typedef std::vector<Component*> Components;
    Components components;
};

#endif
