% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/transform.R
\name{applyTransform}
\alias{applyTransform}
\title{Apply a precomputed transformation}
\usage{
applyTransform(transform, x, interpolation = 3L, nearest = FALSE,
  internal = FALSE)
}
\arguments{
\item{transform}{A transform, possibly obtained from \code{\link{forward}}
or \code{\link{reverse}}.}

\item{x}{A numeric vector, representing a pixel/voxel location in source
space, or a matrix with rows representing such points, or an image with
the same dimensions as the original source image.}

\item{interpolation}{A single integer specifying the type of interpolation
to be applied to the final resampled image. May be 0 (nearest neighbour),
1 (trilinear) or 3 (cubic spline). No other values are valid.}

\item{nearest}{Logical value: if \code{TRUE} and \code{x} contains points,
the nearest voxel centre location in target space will be returned.
Otherwise a more precise subvoxel location will be given.}

\item{internal}{If \code{FALSE}, the default, the returned image will be
returned as a standard R array. If \code{TRUE}, it will instead be an
object of class \code{"internalImage"}, containing only basic metadata and
a C-level pointer to the full image. (See also \code{\link{readNifti}}.)
This can occasionally be useful to save memory.}
}
\value{
A resampled image or matrix of transformed points.
}
\description{
This function allows a precomputed transformation to be applied to a new
image or set of points.
}
\details{
Points may be transformed from source to target space exactly under an
affine transformation, but nonlinear transformation is inexact. Its accuracy
will depend to some extent on the density of the control point grid and the
geometry of the deformation in the vicinity of the points of interest.
Nevertheless, it should be quite sufficient for most purposes.

The method is to first convert the control points to a deformation field
(cf. \code{\link{deformationField}}), which encodes the location of each
target space voxel in the source space. The target voxel closest to the
requested location is found by searching through this deformation field, and
returned if \code{nearest} is \code{TRUE} or it coincides exactly with the
requested location. Otherwise, a block of four voxels in each dimension
around the point of interest is extracted from the deformation field, and
the final location is estimated by local cubic spline regression.
}
\seealso{
\code{\link{niftyreg.linear}}, \code{\link{niftyreg.nonlinear}}
}
\author{
Jon Clayden <code@clayden.org>
}
