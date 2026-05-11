// ============================================================
// 函数名称: sub_428c40
// 虚拟地址: 0x428c40
// WARP GUID: ea45b923-0dbb-54a9-ac0d-d7c6b13d8176
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ReleaseCapture, SetCapture
// [内部子函数调用]: sub_403248, sub_4318d0
// [被调用的父级函数]: sub_42b994, sub_432984
// ============================================================

int32_t __convention("regparm")sub_428c40(int32_t* arg1)
{
    // 第一条实际指令: ReleaseCapture()
    ReleaseCapture()
    char result = 0
    data_52e800 = 0
    
    if (arg1 != 0)
        result = sub_403248(arg1, 0x427f2c)
        
        if (result != 0)
            return SetCapture(sub_4318d0(arg1))
        
        if (arg1[9] != 0)
            data_52e800 = arg1
            return SetCapture(sub_4318d0(arg1[9]))
    
    return result
}
