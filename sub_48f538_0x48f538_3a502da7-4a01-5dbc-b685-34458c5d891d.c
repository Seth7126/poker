// ============================================================
// 函数名称: sub_48f538
// 虚拟地址: 0x48f538
// WARP GUID: 3a502da7-4a01-5dbc-b685-34458c5d891d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: LoadLibraryA, GetProcAddress
// [内部子函数调用]: sub_466adc
// [被调用的父级函数]: 无
// ============================================================

voidsub_48f538()
{
    // 第一条实际指令: int32_t temp0 = data_532110
    int32_t temp0 = data_532110
    data_532110 -= 1
    
    if (temp0 u>= 1 || sub_466adc().b != 0)
        return 
    
    data_5320ec = LoadLibraryA(sub_48f5f8)
    data_5320f0 = GetProcAddress(data_5320ec, sub_48f5f8+0xc)
    data_5320f4 = GetProcAddress(data_5320ec, sub_48f5f8+0x20)
    data_5320f8 = GetProcAddress(data_5320ec, sub_48f5f8+0x38)
    data_5320fc = data_5320f8
    data_532100 = GetProcAddress(data_5320ec, "DirectSoundCaptureCreate")
    data_532104 = GetProcAddress(data_5320ec, "DirectSoundCaptureEnumerateW")
    data_532108 = GetProcAddress(data_5320ec, sub_48f5f8+0x8c)
    data_53210c = data_532108
}
