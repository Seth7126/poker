// ============================================================
// 函数名称: sub_4a53bc
// 虚拟地址: 0x4a53bc
// WARP GUID: 671f8359-bd01-5747-bf2e-c37d99b1e296
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: FreeLibrary
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4a5450, sub_4aaaf7, sub_4aaa64
// ============================================================

int32_tsub_4a53bc()
{
    // 第一条实际指令: if (data_52fd60 s> 0)
    if (data_52fd60 s> 0)
        FreeLibrary(data_52fd60)
    
    data_52fd60 = 0
    
    if (data_52fd64 s> 0)
        FreeLibrary(data_52fd64)
    
    data_52fd64 = 0
    
    if (data_52fd68 s> 0)
        FreeLibrary(data_52fd68)
    
    data_52fd68 = 0
    return 0
}
