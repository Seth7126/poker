// ============================================================
// 函数名称: sub_403248
// 虚拟地址: 0x403248
// WARP GUID: 5454c14b-1e69-5689-9033-8ab7cbd45b49
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_42a58c, sub_43b5b8, sub_4aa7cb, sub_41bf1c, sub_41452d, sub_42eac0, sub_42c1fc, sub_413c58, sub_429cf8, sub_43bf0c, sub_4af7a3, sub_426940, sub_41ba60, sub_442994, sub_43ab7c, sub_439e08, sub_418cb0, sub_43a014, sub_42e664, sub_436aac, sub_41f5c0, sub_445ad4, sub_436940, sub_410f34, sub_42b558, sub_43bd18, sub_4430c0, sub_4a95da, sub_4252fc, sub_436518, sub_436968, sub_4536e0, sub_444e3c, sub_449490, sub_426ab0, sub_4a7e8d, sub_42e618, sub_436954, sub_41c0cc, sub_43bcdc, sub_436918, sub_449348, sub_418f78, sub_42bdf4, sub_44678c, sub_411380, sub_436b14, sub_4aab30, sub_496fb0, sub_42e780, sub_4abbb0, sub_437988, sub_44a0a0, sub_4314c8, sub_437a48, sub_41bcac, sub_41464c, sub_436cdc, sub_43e104, sub_436a30, sub_43a2fc, sub_4a256b, sub_44688c, sub_41b108, sub_43be7c, sub_42b128, sub_4ace2c, sub_42a6b0, sub_42e6ac, sub_447294, sub_40b250, sub_43c13c, sub_42b348, sub_429364, sub_436c1c, sub_4b19b0, sub_43550c, sub_4af710, sub_440ee0, sub_43692c, sub_432348, sub_439f30, sub_42d2c0, sub_453e6c, sub_436d38, sub_43cd94, sub_42ab1c, sub_443850, sub_4449fc, sub_4a5c03, sub_4a2124, sub_43697c, sub_44bc5c, sub_434144, sub_44228c, sub_436c84, sub_446644, sub_424fbc, sub_437d74, sub_42efd0, sub_41ba2c, sub_441018, sub_411588, sub_4309f4, sub_4187b0, sub_436904, sub_43cd08, sub_411284, sub_429018, sub_4a8048, sub_4367e8, sub_41341e, sub_44a448, sub_436764, sub_429b88, sub_429194, sub_4aa582, sub_436b6c, sub_411610, sub_436bc4, sub_429f30, sub_431e68, sub_4a1a28, sub_453660, sub_439b68, sub_4abda8, sub_4af7b0, sub_41db84, sub_4294fc, sub_428c40, sub_42acb8, sub_4368f0, sub_40bad8, sub_42d4b8, sub_42d64c, sub_4323b0, sub_436448, sub_4aac84, sub_445b91, sub_44bb04
// ============================================================

void __convention("regparm")sub_403248(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 
    
    while (true)
        arg1 = *arg1
        
        if (arg1 == arg2)
            arg1.b = 1
            break
        
        arg1 = arg1[-9]
        
        if (arg1 == 0)
            return 
}
