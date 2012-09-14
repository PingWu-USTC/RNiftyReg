/** @file reg_f3d.h
 * @date 22/06/2012
 * @author Marc Modat
 * @brief Header file that contains the string to be returned
 * for the slicer extension of reg_f3d
 */

char xml_f3d[] =
"<?xml version=\"1.0\" encoding=\"utf-8\"?>\n"
"<executable>\n"
"  <category>Registration.NiftyReg</category>\n"
"  <title>RegF3D (NiftyReg)</title>\n"
"  <description><![CDATA[Module/executable for local registration (non-rigid) based on a cubic B-Spline deformation model]]></description>\n"
"  <version>0.0.1</version>\n"
"  <documentation-url>http://cmic.cs.ucl.ac.uk/home/software/</documentation-url>\n"
"  <license>BSD</license>\n"
"  <contributor>Marc Modat, Pankaj Daga (UCL)</contributor>\n"
"  <parameters advanced=\"false\">\n"
"    <label>Input images. Reference and floating images are mandatory</label>\n"
"    <description>Input images to perform the registration</description>\n"
//"    <file fileExtensions=\".nii,.nii.gz,.nrrd,.png\">\n"
"    <image>"
"      <name>referenceImageName</name>\n"
"      <longflag>ref</longflag>\n"
"      <description>Reference image filename (also called Target or Fixed)</description>\n"
"      <label>Reference image</label>\n"
"      <default>required</default>\n"
"      <channel>input</channel>\n"
//"    </file>\n"
"    </image>"
//"    <file fileExtensions=\".nii,.nii.gz,.nrrd,.png\">\n"
"    <image>"
"      <name>floatingImageName</name>\n"
"      <longflag>flo</longflag>\n"
"      <description>Floating image filename (also called Source or moving)</description>\n"
"      <label>Floating image</label>\n"
"      <default>required</default>\n"
"      <channel>input</channel>\n"
//"    </file>\n"
"    </image>"
//"    <file fileExtensions=\".nii,.nii.gz,.nrrd,.png\">\n"
"    <image>"
"      <name>referenceMaskImageName</name>\n"
"      <longflag>rmask</longflag>\n"
"      <description>Reference mask image filename</description>\n"
"      <label>Ref. mask</label>\n"
"      <default></default>\n"
"      <channel>input</channel>\n"
//"    </file>\n"
"    </image>"
"  </parameters>\n"
"  <parameters advanced=\"true\">\n"
"    <label>Input affine or non-rigid parametrisation</label>\n"
"    <description>Optional input transformation</description>\n"
"    <file fileExtensions=\".txt\">\n"
"      <name>inputAffineName</name>\n"
"      <longflag>inaff</longflag>\n"
"      <description>Affine registration matrix stored as a text file</description>\n"
"      <label>Input affine trans. from RegAladin</label>\n"
"      <default></default>\n"
"      <channel>input</channel>\n"
"    </file>\n"
"    <file fileExtensions=\".nii,.nii.gz,.nrrd\">\n"
//"    <image>"
"      <name>inputControlPointPosition</name>\n"
"      <longflag>incpp</longflag>\n"
"      <description>Control point position image from NiftyReg</description>\n"
"      <label>Input trans. from RefF3D</label>\n"
"      <default></default>\n"
"      <channel>input</channel>\n"
"    </file>\n"
//"    </image>"
"  </parameters>\n"
"  <parameters advanced=\"false\">\n"
"    <label>Registration output</label>\n"
"    <description>Final transformation parametrisation and warped image</description>\n"
"    <file fileExtensions=\".nii,.nii.gz,.nrrd\">\n"
//"    <image>"
"      <name>outputCPPFileName</name>\n"
"      <longflag>cpp</longflag>\n"
"      <description>Control point position image</description>\n"
"      <label>Trans. param image</label>\n"
"      <default>outputCPP.nii</default>\n"
"      <channel>output</channel>\n"
"    </file>\n"
//"    </image>"
//"    <file fileExtensions=\".nii,.nii.gz,.nrrd,.png\">\n"
"    <image>"
"      <name>outputWarpedImageName</name>\n"
"      <longflag>res</longflag>\n"
"      <description>Warped floating image</description>\n"
"      <label>Output warped image</label>\n"
"      <default>outputResult</default>\n"
"      <channel>output</channel>\n"
//"    </file>\n"
"    </image>"
"  </parameters>\n"
"  <parameters advanced=\"true\">\n"
"    <label>Spline parametrisation options</label>\n"
"    <description>Spline control point spacing</description>\n"
"    <float>\n"
"      <name>xAxisSpacing</name>\n"
"      <longflag>sx</longflag>\n"
"      <description>Control point spacing along the x-axis in mm (in voxel if negative value)</description>\n"
"      <label>x-axis spacing</label>\n"
"      <default>-5</default>\n"
"    </float>\n"
"    <float>\n"
"      <name>yAxisSpacing</name>\n"
"      <longflag>sy</longflag>\n"
"      <description>Control point spacing along the y-axis in mm (in voxel if negative value)</description>\n"
"      <label>y-axis spacing</label>\n"
"      <default>-5</default>\n"
"    </float>\n"
"    <float>\n"
"      <name>zAxisSpacing</name>\n"
"      <longflag>sz</longflag>\n"
"      <description>Control point spacing along the z-axis in mm (in voxel if negative value)</description>\n"
"      <label>z-axis spacing</label>\n"
"      <default>-5</default>\n"
"    </float>\n"
"  </parameters>\n"
"  <parameters advanced=\"true\">\n"
"    <label>Image intensity parameters</label>\n"
"    <description>Intensity rescaling and thresholding</description>\n"
"    <float>\n"
"      <name>smoothReferenceWidth</name>\n"
"      <longflag>smooR</longflag>\n"
"      <description>Standard deviation in mm (voxel if negative) of the Gaussian kernel used to smooth the reference image</description>\n"
"      <label>Ref .Smooth</label>\n"
"      <default>0</default>\n"
"    </float>\n"
"    <float>\n"
"      <name>smoothFloatingWidth</name>\n"
"      <longflag>smooF</longflag>\n"
"      <description>Standard deviation in mm (voxel if negative) of the Gaussian kernel used to smooth the Floating image</description>\n"
"      <label>Flo. smooth</label>\n"
"      <default>0</default>\n"
"    </float>\n"
"    <float>\n"
"      <name>ReferenceBinNumber</name>\n"
"      <longflag>rbn</longflag>\n"
"      <description>Number of bin to use for the joint histogram computation - Reference image</description>\n"
"      <label>Ref. bin number</label>\n"
"      <default>64</default>\n"
"    </float>\n"
"    <float>\n"
"      <name>FloatingBinNumber</name>\n"
"      <longflag>fbn</longflag>\n"
"      <description>Number of bin to use for the joint histogram computation - Floating image</description>\n"
"      <label>Flo. bin number</label>\n"
"      <default>64</default>\n"
"    </float>\n"
"    <float>\n"
"      <name>ReferenceIntensityLowerThreshold</name>\n"
"      <longflag>rLwTh</longflag>\n"
"      <description>Lower threshold intensity value to apply to the reference image</description>\n"
"      <label>Ref. low thr.</label>\n"
"      <default>-3.4e+38</default>\n"
"    </float>\n"
"    <float>\n"
"      <name>ReferenceIntensityUpperThreshold</name>\n"
"      <longflag>rUpTh</longflag>\n"
"      <description>Upper threshold intensity value to apply to the reference image</description>\n"
"      <label>Ref. up thr.</label>\n"
"      <default>3.4e+38</default>\n"
"    </float>\n"
"    <float>\n"
"      <name>FloatingIntensityLowerThreshold</name>\n"
"      <longflag>fLwTh</longflag>\n"
"      <description>Lower threshold intensity value to apply to the floating image</description>\n"
"      <label>Flo. low thr.</label>\n"
"      <default>-3.4e+38</default>\n"
"    </float>\n"
"    <float>\n"
"      <name>FloatingIntensityUpperThreshold</name>\n"
"      <longflag>fUpTh</longflag>\n"
"      <description>Upper threshold intensity value to apply to the floating image</description>\n"
"      <label>Flo. up thr.</label>\n"
"      <default>3.4e+38</default>\n"
"    </float>\n"
"  </parameters>\n"
"  <parameters advanced=\"true\">\n"
"    <label>Objective function options</label>\n"
"    <description>Objective function options</description>\n"
"    <float>\n"
"      <name>BendingEnergyPenaltyTermWeight</name>\n"
"      <longflag>be</longflag>\n"
"      <description>Weight to apply to the bending energy</description>\n"
"      <label>Bending Energ. weight</label>\n"
"      <default>0.005</default>\n"
"    </float>\n"
"    <float>\n"
"      <name>L2NormPenaltyTermWeight</name>\n"
"      <longflag>l2</longflag>\n"
"      <description>Weight to apply to the L2 norm of the displacement</description>\n"
"      <label>L2 norm weight</label>\n"
"      <default>0</default>\n"
"    </float>\n"
"    <float>\n"
"      <name>JacobianBasedPenaltyTermWeight</name>\n"
"      <longflag>jl</longflag>\n"
"      <description>Weight to apply to the Jacobian based penalty term</description>\n"
"      <label>Jac.-based pen. term</label>\n"
"      <default>0</default>\n"
"    </float>\n"
"    <boolean>\n"
"      <name>NoJacobianBasedPenaltyTermApproximation</name>\n"
"      <longflag>noAppJL</longflag>\n"
"      <description>Do not approximate the Jacobian based penalty term at the control point position only</description>\n"
"      <label>No approx. Jac.-based term</label>\n"
"      <default>false</default>\n"
"    </boolean>\n"
"    <boolean>\n"
"      <name>UseSSD</name>\n"
"      <longflag>ssd</longflag>\n"
"      <description>To use the SSD as a measure of similarity instead of the NMI used by default</description>\n"
"      <label>Use SSD</label>\n"
"      <default>false</default>\n"
"    </boolean>\n"
"    <boolean>\n"
"      <name>Use_KL_divergence</name>\n"
"      <longflag>kld</longflag>\n"
"      <description>To use the KL divergence as a measure of similarity instead of the NMI used by default</description>\n"
"      <label>Use KLD</label>\n"
"      <default>false</default>\n"
"    </boolean>\n"
"  </parameters>\n"
"  <parameters advanced=\"true\">\n"
"    <label>Optimisation options</label>\n"
"    <description>Various optimisation options</description>\n"
"    <integer>\n"
"      <name>levelPyramidNumber</name>\n"
"      <longflag>ln</longflag>\n"
"      <description>Number of level to use to generate the pyramids for the coarse-to-fine approach</description>\n"
"      <label>Level number</label>\n"
"      <default>3</default>\n"
"      <constraints>\n"
"        <minimum>0</minimum>\n"
"        <maximum>10</maximum>\n"
"        <step>1</step>\n"
"      </constraints>\n"
"    </integer>\n"
"    <integer>\n"
"      <name>levelToPerformNumber</name>\n"
"      <longflag>lp</longflag>\n"
"      <description>Number of level to use to run the registration once the pyramids have been created</description>\n"
"      <label>Level to perform</label>\n"
"      <default>3</default>\n"
"      <constraints>\n"
"        <minimum>0</minimum>\n"
"        <maximum>10</maximum>\n"
"        <step>1</step>\n"
"      </constraints>\n"
"    </integer>\n"
"    <integer>\n"
"      <name>iterationNumber</name>\n"
"      <longflag>maxit</longflag>\n"
"      <description>Maximal number of iteration of the trimmed least square approach to perform per total</description>\n"
"      <label>Iteration number</label>\n"
"      <default>300</default>\n"
"      <constraints>\n"
"        <minimum>0</minimum>\n"
"        <maximum>50000</maximum>\n"
"        <step>1</step>\n"
"      </constraints>\n"
"    </integer>\n"
"    <boolean>\n"
"      <name>NoConjugateGradient</name>\n"
"      <longflag>noConj</longflag>\n"
"      <description>By default a conjugate gradient ascent is used. Active this option to use a steepest gradient ascent scheme.</description>\n"
"      <label>no conj. grad. ascent</label>\n"
"      <default>false</default>\n"
"    </boolean>\n"
"    <boolean>\n"
"      <name>NoPyramid</name>\n"
"      <longflag>nopy</longflag>\n"
"      <description>Active this option to perform every level at full resolution</description>\n"
"      <label>no pyramid</label>\n"
"      <default>false</default>\n"
"    </boolean>\n"
"    <integer-enumeration>\n"
"      <name>interpolation</name>\n"
"      <longflag>interp</longflag>\n"
"      <description>Interpolation order to use internally to warp the floating image</description>\n"
"      <label>Interpolation order</label>\n"
"      <default>1</default>\n"
"      <element>0</element>\n"
"      <element>1</element>\n"
"      <element>3</element>\n"
"    </integer-enumeration>\n"
"  </parameters>\n"

"  <parameters advanced=\"true\">\n"
"    <label>F3D_sym options</label>\n"
"    <description>Flag and argument to use the symmetric registration scheme</description>\n"
"    <boolean>\n"
"      <name>useSym</name>\n"
"      <longflag>sym</longflag>\n"
"      <description>Performs a symmetric registration where both, forward and backward transformations are optimised</description>\n"
"      <label>Use symmetry</label>\n"
"      <default>false</default>\n"
"    </boolean>\n"
//"    <file fileExtensions=\".nii,.nii.gz,.nrrd,.png\">\n"
"    <image>"
"      <name>floatingMaskImageName</name>\n"
"      <longflag>fmask</longflag>\n"
"      <description>Floating mask image filename</description>\n"
"      <label>Flo. mask</label>\n"
"      <default></default>\n"
"      <channel>input</channel>\n"
//"    </file>\n"
"    </image>"
"    <float>\n"
"      <name>InverseConsistencyPenaltyTermWeight</name>\n"
"      <longflag>ic</longflag>\n"
"      <description>Weight to apply to the inverse consistency term</description>\n"
"      <label>Inv. consis. weight</label>\n"
"      <default>0</default>\n"
"    </float>\n"
"  </parameters>\n"
"  <parameters advanced=\"true\">\n"
"    <label>F3D2 options</label>\n"
"    <description>Flag and argument to use the stationary velocity field parametrisation</description>\n"
"    <boolean>\n"
"      <name>useVel</name>\n"
"      <longflag>vel</longflag>\n"
"      <description>Performs a symmetric registration where both, forward and backward transformations are optimised. The transformation are parametrised using a stationary velocity field</description>\n"
"      <label>Use F3D2</label>\n"
"      <default>false</default>\n"
"    </boolean>\n"
//"    <file fileExtensions=\".nii,.nii.gz,.nrrd,.png\">\n"
"    <image>"
"      <name>floatingMaskImageName</name>\n"
"      <longflag>smask</longflag>\n"
"      <description>Floating mask image filename</description>\n"
"      <label>Flo. mask</label>\n"
"      <default></default>\n"
"      <channel>input</channel>\n"
//"    </file>\n"
"    </image>"
"    <integer>\n"
"      <name>compositionStepNumber</name>\n"
"      <longflag>step</longflag>\n"
"      <description>Number of composition step to use to perform the velocity field integration</description>\n"
"      <label>Comp. step number</label>\n"
"      <default>6</default>\n"
"    </integer>\n"
"  </parameters>\n"
"</executable>\n"
;
