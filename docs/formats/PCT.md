## PCT format (.pct | gs_shared/picture.cpp)
The PCT format is Will Rock’s proprietary texture format. It is a chunk-based format that supports multiple image compression types, mipmaps and bit depths.
It supports multiple texture formats, including:
- RGBA32 - 32-bit uncompressed color (8 bits per channel + alpha)
- DXT1 – compressed format (no alpha or 1-bit alpha)
- DXT3 – compressed format with 4-bit alpha
- DXT5 – compressed format with interpolated alpha
- RGB565 – 16-bit color (5 bits red, 6 bits green, 5 bits blue)
- RGB323 – 8-bit color format (3 bits red, 2 bits green, 3 bits blue)

## File structure
- F0	Main header / magic signature. Marks the start of the texture file.
- F1	Texture width and height.
- F2	Texture format ID (e.g., RGBA32, DXT1/3/5, RGB565, RGB323).
- F9	Mipmap count (optional). Indicates how many lower-resolution versions exist.
- F4	Pixel data. Contains the actual image, either raw or compressed depending on the format.
