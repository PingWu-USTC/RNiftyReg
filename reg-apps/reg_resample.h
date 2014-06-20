/**
 * @file reg_resample.h
 * @author Marc Modat
 * @date 26/06/2012
 * @brief Header file that contains the string to be returned
 * for the slicer extension of reg_resample
 *
 * Created by Marc Modat on 26/06/2012.
 * Copyright (c) 2012, University College London. All rights reserved.
 * Centre for Medical Image Computing (CMIC)
 * See the LICENSE*.txt file in the nifty_reg root folder
 *
 */

char xml_resample[] =
   "<?xml version=\"1.0\" encoding=\"utf-8\"?>\n"
   "<executable>\n"
   "  <category>Registration.NiftyReg</category>\n"
   "  <title>RegResample (NiftyReg)</title>\n"
   "  <description><![CDATA[NiftyReg module for resampling using input transformation]]></description>\n"
   "  <version>0.0.1</version>\n"
   "  <documentation-url>http://cmic.cs.ucl.ac.uk/home/software/</documentation-url>\n"
   "  <license>BSD</license>\n"
   "  <contributor>Marc Modat (UCL)</contributor>\n"
   "  <parameters advanced=\"false\">\n"
   "    <label>Input images. Reference and floating images are mandatory</label>\n"
   "    <description>Input images</description>\n"
   "    <image fileExtensions=\".nii,.nii.gz,.nrrd,.png\">"
   "      <name>referenceImageName</name>\n"
   "      <longflag>ref</longflag>\n"
   "      <description>Reference image filename (also called Target of Fixed)</description>\n"
   "      <label>Reference image</label>\n"
   "      <default>required</default>\n"
   "      <channel>input</channel>\n"
   "    </image>"
   "    <image fileExtensions=\".nii,.nii.gz,.nrrd,.png\">"
   "      <name>floatingImageName</name>\n"
   "      <longflag>flo</longflag>\n"
   "      <description>Floating image filename (also called Source of moving)</description>\n"
   "      <label>Floating image</label>\n"
   "      <default>required</default>\n"
   "      <channel>input</channel>\n"
   "    </image>"
   "  </parameters>\n"
   "  <parameters advanced=\"false\">\n"
   "    <label>Input transformation. Identity transformation is used by default.</label>\n"
   "    <description>Input transformation generated by a NiftyReg module or executable</description>\n"
   "    <file fileExtensions=\".txt,.mat,.nii,.nii.gz,.nrrd\">\n"
   "      <name>inputTransformation</name>\n"
   "      <longflag>trans</longflag>\n"
   "      <description>Input transformation</description>\n"
   "      <label>Input trans.</label>\n"
   "      <default></default>\n"
   "      <channel>input</channel>\n"
   "    </file>\n"
   "  </parameters>\n"
   "  <parameters advanced=\"false\">\n"
   "    <label>Output image</label>\n"
   "    <description>Resampled images using the provided transformation</description>\n"
   "    <image fileExtensions=\".nii,.nii.gz,.nrrd,.png\">"
   "      <name>warpedImage</name>\n"
   "      <longflag>res</longflag>\n"
   "      <description>Warped floating image</description>\n"
   "      <label>Warped image</label>\n"
   "      <default>warpedImage.nii</default>\n"
   "      <channel>output</channel>\n"
   "    </image>"
   "    <image fileExtensions=\".nii,.nii.gz,.nrrd,.png\">"
   "      <name>warpedGrid</name>\n"
   "      <longflag>blank</longflag>\n"
   "      <description>Warped blank grid image</description>\n"
   "      <label>Grid image</label>\n"
   "      <default>warpedGrid.nii</default>\n"
   "      <channel>output</channel>\n"
   "    </image>"
   "  </parameters>\n"
   "  <parameters advanced=\"true\">\n"
   "    <label>Interpolation type</label>\n"
   "    <description>Type of interpolation method used to resample the floating image</description>\n"
   "    <integer-enumeration>\n"
   "      <name>interpolation</name>\n"
   "      <longflag>inter</longflag>\n"
   "      <description>Interpolation order to use to warp the floating image</description>\n"
   "      <label>Interpolation order</label>\n"
   "      <default>3</default>\n"
   "      <element>0</element>\n"
   "      <element>1</element>\n"
   "      <element>3</element>\n"
   "    </integer-enumeration>\n"
   "    <float>\n"
   "      <name>paddingValue</name>\n"
   "      <longflag>pad</longflag>\n"
   "      <description>Padding value</description>\n"
   "      <label>Padding value</label>\n"
   "      <default>0</default>\n"
   "    </float>\n"
   "  </parameters>\n"
   "</executable>"
   ;
