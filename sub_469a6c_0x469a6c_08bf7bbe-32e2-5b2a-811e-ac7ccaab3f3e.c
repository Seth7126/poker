// ============================================================
// 函数名称: sub_469a6c
// 虚拟地址: 0x469a6c
// WARP GUID: 08bf7bbe-32e2-5b2a-811e-ac7ccaab3f3e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ChangeDisplaySettingsA
// [内部子函数调用]: sub_4471a4, sub_447198
// [被调用的父级函数]: sub_471144, sub_473938
// ============================================================

enum DISP_CHANGE __fastcallsub_469a6c(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: *data_530a18
    *data_530a18
    DEVMODEA devMode
    devMode.dmPelsWidth = sub_4471a4()
    *data_530a18
    devMode.dmPelsHeight = sub_447198()
    devMode.dmBitsPerPel = arg2
    devMode.dmFields = 0x1c0000
    
    if (ChangeDisplaySettingsA(&devMode, CDS_UPDATEREGISTRY) != DISP_CHANGE_SUCCESSFUL)
        return DISP_CHANGE_SUCCESSFUL
    
    enum DISP_CHANGE result
    result.b = 1
    return result
}
