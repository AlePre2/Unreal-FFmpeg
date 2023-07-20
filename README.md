# Unreal FFmpeg

A simple plugin to allow media utility in blueprints using FFmpeg.

Uneral version: 5.2

## Blueprints

### Media conversion
![image](https://github.com/AlePre2/Unreal-FFmpeg/assets/56503173/ce8a2571-78a1-40c2-9f5d-5f8a28585ba9)

You can use this async blueprint to modify a media creating a new file.

The blueprint is able to convert the media to a new extension for example from "mp4" to "avi"

### Get media info
![image](https://github.com/AlePre2/Unreal-FFmpeg/assets/56503173/f82bbc8b-a18a-4420-87c3-1d4e003b97a8)

You can use this async blueprint to retrive data from a file.

You can also see more in depth info in the log of the last execution of the node that you can find at: "Project\Saved\FFmpeg\GetMediaData.txt"

## Contributing

Pull requests are welcome.

Do not hesitate to contribute to the project.

If you would like some feature not currently present you can request it and maybe it will be implemented in the future.

## Tecnical Info

This plugin at the moment works only on windows.

This plugin use the Windows CMD.

This plugin uses FFmpeg 6.0 it has the ffmpeg.exe in the content folder so you do not have to have it installed to make the plugin work.

## License

[MIT](https://choosealicense.com/licenses/mit/)

