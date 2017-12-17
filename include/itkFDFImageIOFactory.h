/*=========================================================================
 *
 *  Copyright Insight Software Consortium
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0.txt
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *=========================================================================*/
#ifndef itkFDFImageIOFactory_h
#define itkFDFImageIOFactory_h
#include "IOFDFExport.h"
#include "itkObjectFactoryBase.h"
#include "itkImageIOBase.h"

namespace itk
{
/** \class FDFImageIOFactory
 *  \ingroup ITKIOFDF
 * \brief Create instances of FDFImageIO objects using an object factory.
 */
class IOFDF_EXPORT FDFImageIOFactory : public ObjectFactoryBase
{
public:
  /** Standard class typedefs. */
  typedef FDFImageIOFactory         Self;
  typedef ObjectFactoryBase         Superclass;
  typedef SmartPointer<Self>        Pointer;
  typedef SmartPointer<const Self>  ConstPointer;

  /** Class methods used to interface with the registered factories. */
  const char* GetITKSourceVersion(void) const ITK_OVERRIDE;
  const char* GetDescription(void) const ITK_OVERRIDE;

  /** Method for class instantiation. */
  itkFactorylessNewMacro(Self);

  /** Run-time type information (and related methods). */
  itkTypeMacro(FDFImageIOFactory, ObjectFactoryBase);

  /** Register one factory of this type  */
  static void RegisterOneFactory(void)
  {
    FDFImageIOFactory::Pointer FdfFactory = FDFImageIOFactory::New();
    ObjectFactoryBase::RegisterFactoryInternal(FdfFactory);
  }

protected:
  FDFImageIOFactory();
  ~FDFImageIOFactory() ITK_OVERRIDE;

private:
  ITK_DISALLOW_COPY_AND_ASSIGN(FDFImageIOFactory);

};


} // end namespace itk

#endif
