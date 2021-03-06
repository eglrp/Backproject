

#include "RemoveAllImagesOperation.h"


bool RemoveAllImagesOperation::IsPossible(const Context &context) const
{
    return context.listImages().size() > 0;
}

std::string RemoveAllImagesOperation::getDescription() const
{

    return "remove all images from context";
}

std::string RemoveAllImagesOperation::Perform(Context &context) const
{

    context.removeAllImages();
    return "Removed all images from context.";
}
